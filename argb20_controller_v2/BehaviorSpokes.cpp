#include "BehaviorSpokes.hpp"

BehaviorSpokes::BehaviorSpokes()
{
	offset = 0;
}

void BehaviorSpokes::setOffset(uint8_t o)
{
	offset = o;
}

uint8_t BehaviorSpokes::setPattern(Palette* pal, CRGB* leds, uint8_t state)
{
	int i = 0;
	for (; i<20; i++)
	{
		leds[i].nscale8( 64 );
	}
	
	int a = (state + offset) % 20;
	*(leds + a) = *pal->getColor(a);
	
	return (6 + state) % 20;
}
