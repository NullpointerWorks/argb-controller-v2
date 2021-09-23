#include "Controller.hpp"

Controller::Controller()
{
	leds = new CRGB[20];
}

Controller::~Controller()
{
	delete[] leds;
	behave = nullptr;
	palette = nullptr;
}

void Controller::setBehavior(Behavior* beh)
{
	behave = beh;
}

void Controller::setPalette(Palette* pal)
{
	palette = pal;
}

CRGB* Controller::getLEDS()
{
	return leds;
}

void Controller::doNextStep()
{
	behave->doBehaviour(palette, leds);
}
