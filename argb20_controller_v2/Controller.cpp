#include "Controller.hpp"

Controller::Controller()
{
	leds = new CRGB[20];
	state = 0;
}

Controller::~Controller()
{
	delete[] leds;
	behave = nullptr;
	palette = nullptr;
}

void Controller::setBehavior(Behavior* beh)
{
	state = 0;
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
	behave->setPattern(palette, leds, &state);
}
