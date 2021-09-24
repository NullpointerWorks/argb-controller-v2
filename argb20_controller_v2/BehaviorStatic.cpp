#include "BehaviorStatic.hpp"

BehaviorStatic::BehaviorStatic()
{

}

void BehaviorStatic::setOffset(uint8_t o)
{

}

void BehaviorStatic::setPattern(Palette* pal, CRGB* leds, uint8_t* state)
{
	int i = 0;
	for (; i<20; i++)
	{
		*(leds + i) = *pal->getColor(i);
	}
}
