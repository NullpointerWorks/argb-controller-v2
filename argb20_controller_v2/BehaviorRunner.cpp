#include "BehaviorRunner.hpp"

BehaviorRunner::BehaviorRunner()
{
	offset = 0;
	strip_cycle = 0;
}

void BehaviorRunner::setOffset(uint8_t o)
{
	offset = o;
}

void BehaviorRunner::setPattern(Palette* pal, CRGB* leds)
{
	int i = 0;
	for (; i<20; i++)
	{
		leds[i].nscale8( 128 ); // devide by 2
	}
	
	int a = (strip_cycle + offset) % 20;
	*(leds + a) = *pal->getColor(a);
}

void BehaviorRunner::doStep()
{
	strip_cycle = (1 + strip_cycle) % 20;
}
