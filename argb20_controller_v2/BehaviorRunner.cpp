#include "BehaviorRunner.hpp"

BehaviorRunner::BehaviorRunner()
{
	offset = 0;
}

void BehaviorRunner::setOffset(uint8_t o)
{
	offset = o;
}

void BehaviorRunner::setPattern(Palette* pal, CRGB* leds, uint8_t* state)
{
	int i = 0;
	for (; i<20; i++)
	{
		leds[i].nscale8( 128 ); // devide by 2
	}
	
	int a = (*state + offset) % 20;
	*(leds + a) = *pal->getColor(a);
	
	*state = (1 + *state) % 20;
}
