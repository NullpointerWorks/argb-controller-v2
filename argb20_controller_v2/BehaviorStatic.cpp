#include "BehaviorStatic.hpp"

BehaviorStatic::BehaviorStatic()
{

}

void BehaviorStatic::setOffset(uint8_t o)
{

}

uint8_t BehaviorStatic::setPattern(Palette* pal, CRGB* leds, uint8_t state)
{
	int i = 0;
	for (; i<20; i++)
	{
		*(leds + i) = *pal->getColor(i);
	}
	
	return 0;
}
