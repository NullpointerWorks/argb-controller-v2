#include "BehaviorRevolver.hpp"

BehaviorRevolver::BehaviorRevolver()
{
	offset = 0;
	strip_cycle = 0;
}

void BehaviorRevolver::setOffset(uint8_t o)
{
	offset = o;
}

void BehaviorRevolver::doBehaviour(Palette* pal, CRGB* leds)
{
	int i = 0;
	for (; i<20; i++)
	{
		int a = (i + strip_cycle + offset) % 20;
		*(leds + i) = *pal->getColor(a);
	}
	strip_cycle = (1 + strip_cycle) % 20;
}
