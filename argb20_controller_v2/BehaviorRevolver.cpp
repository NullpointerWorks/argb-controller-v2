#include "BehaviorRevolver.hpp"

BehaviorRevolver::BehaviorRevolver()
{
	offset = 0;
}

void BehaviorRevolver::setOffset(uint8_t o)
{
	offset = o;
}

void BehaviorRevolver::setPattern(Palette* pal, CRGB* leds, uint8_t* state)
{
	int i = 0;
	for (; i<20; i++)
	{
		int a = (i + *state + offset) % 20;
		*(leds + i) = *pal->getColor(a);
	}
	
	*state = (1 + *state) % 20;
}
