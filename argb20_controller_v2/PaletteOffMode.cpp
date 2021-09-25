#include "PaletteOffMode.hpp"

PaletteOffMode::PaletteOffMode()
{
	palette = new CRGB(0, 0, 0);
}

PaletteOffMode::~PaletteOffMode()
{
	delete palette;
}

int PaletteOffMode::getSize()
{
	return 1;
}

CRGB* PaletteOffMode::getColor(int index)
{
	return palette;
}
