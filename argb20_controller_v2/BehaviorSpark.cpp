#include "BehaviorSpark.hpp"

BehaviorSpark::BehaviorSpark()
{
	randomSeed(random(0,20));
	pick_delay = random(3,12);
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

void BehaviorSpark::doBehaviour(Palette* pal, CRGB* leds)
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
		pick_delay = random(3,12);
		
		uint8_t select = random(0,20);
		uint8_t pick = random(0,20);
		leds[select] = *pal->getColor(pick);
	}
}
