#include "PaletteOffMode.hpp"

PaletteOffMode::PaletteOffMode()
{
	palette = new CRGB(0, 0, 0);
}

PaletteOffMode::~PaletteOffMode()
{
	delete palette;
}

CRGB* PaletteOffMode::getColor(int index)
{
	return palette;
}
