#include <FastLED.h>
#include "Palette.hpp"
#include "Behavior.hpp"

#ifndef _CONTROLLER_HPP_
#define _CONTROLLER_HPP_

class Controller
{
private:
	CRGB* leds;
	Behavior* behave = nullptr;
	Palette* palette = nullptr;
	
public:
	Controller();
	~Controller();
	
	void setBehavior(Behavior*);
	void setPalette(Palette*);
	
	CRGB* getLEDS();
	void doNextStep();
};

#endif
