#include <FastLED.h>

#include "Palette.hpp"
#include "PaletteOffMode.hpp"
#include "PaletteRainbow.hpp"
#include "PaletteSoftRainbow.hpp"
#include "Behavior.hpp"
#include "BehaviorRevolver.hpp"
#include "BehaviorSpark.hpp"
#include "BehaviorStatic.hpp"
#include "BehaviorRunner.hpp"
#include "Controller.hpp"

// pin configuration
#define SWITCH_P 2
#define ARGB_1 8
#define ARGB_2 9
#define ARGB_3 10
#define ARGB_4 11
#define ARGB_5 12
#define ARGB_6 13
#define ARGB_7 7
#define ARGB_8 6

// patterns and behaviors
#define OFFMODE 0
#define RAINBOW 1
#define SOFTRGB 2
#define NUM_PATTERNS 3
uint8_t pattern = OFFMODE;
Palette* offmode;
Palette* rainbow;
Palette* softrgb;
Behavior* bstatic;
Behavior* revolver;
Behavior* spark;
Behavior* runner;

// RGB controllers
#define NUM_CONTROLLERS 8
Controller* controllers;

void setPattern(Palette* p, Behavior* b)
{
	for (int i=0; i<NUM_CONTROLLERS; i++)
	{
		controllers[i].setPalette( p );
		controllers[i].setBehavior( b );
	}
}

void doUpdate(uint8_t pattern)
{
	switch(pattern)
	{
	case RAINBOW:
		setPattern(rainbow, revolver);
		break;
		
	case SOFTRGB:
		setPattern(softrgb, spark);
		break;
		
	case OFFMODE:
	default:
		setPattern(offmode, bstatic);
		break;
	}
}

// Interrupt Service Routine to swap NeoPixel patterns
void doInterrupt()
{
	pattern = (pattern+1) % NUM_PATTERNS;
	doUpdate(pattern);
}

void setup() 
{
	offmode 	= new PaletteOffMode();
	rainbow 	= new PaletteRainbow();
	softrgb 	= new PaletteSoftRainbow();
	
	bstatic 	= new BehaviorStatic();
	revolver 	= new BehaviorRevolver();
	spark 		= new BehaviorSpark();
	runner 		= new BehaviorRunner();
	
	controllers = new Controller[NUM_CONTROLLERS];
	
	FastLED.addLeds<NEOPIXEL, ARGB_1>(controllers[0].getLEDS(), 20);
	FastLED.addLeds<NEOPIXEL, ARGB_2>(controllers[1].getLEDS(), 20);
	FastLED.addLeds<NEOPIXEL, ARGB_3>(controllers[2].getLEDS(), 20);
	FastLED.addLeds<NEOPIXEL, ARGB_4>(controllers[3].getLEDS(), 20);
	FastLED.addLeds<NEOPIXEL, ARGB_5>(controllers[4].getLEDS(), 20);
	FastLED.addLeds<NEOPIXEL, ARGB_6>(controllers[5].getLEDS(), 20);
	FastLED.addLeds<NEOPIXEL, ARGB_7>(controllers[6].getLEDS(), 20);
	FastLED.addLeds<NEOPIXEL, ARGB_8>(controllers[7].getLEDS(), 20);
	
	attachInterrupt( digitalPinToInterrupt(SWITCH_P), doInterrupt, FALLING );
	doUpdate(OFFMODE);
	delay(200); // pre-charge delay
}

void loop()
{
	for (int i=0; i<NUM_CONTROLLERS; i++)
	{
		controllers[i].doNextStep();
	}
	FastLED.show();
	delay(70);
}
