#include "BehaviorStatic.hpp"

BehaviorStatic::BehaviorStatic()
{

}

void BehaviorStatic::setOffset(uint8_t o)
{

}

void BehaviorStatic::doBehaviour(Palette* pal, CRGB* leds)
{
	int i = 0;
	for (; i<20; i++)
	{
		*(leds + i) = *pal->getColor(i);
	}
}
