#include "BehaviorSpark.hpp"

BehaviorSpark::BehaviorSpark()
{
	randomSeed(1);
	pick_delay = 10;
	pick_timer = 10;
}

void BehaviorSpark::setOffset(uint8_t o)
{
	offset = o;
}

void BehaviorSpark::setPickerDelay(uint8_t pd)
{
	pick_delay = pd;
}

uint8_t BehaviorSpark::setPattern(Palette* pal, CRGB* leds, uint8_t state)
{
	int i = 0;
	for (; i<20; i++)
	{
		leds[i].nscale8( 128 ); // devide by 2
	}
	
	pick_timer++;
	if (pick_timer >= pick_delay)
	{
		pick_timer = 0;
		
		uint8_t select = random(0,20);
		uint8_t pick = random(0,20);
		leds[select] = *pal->getColor(pick);
	}
	
	return 0;
}
