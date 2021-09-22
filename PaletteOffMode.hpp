#include <FastLED.h>
#include "Palette.hpp"

#ifndef _PALETTE_OFFMODE_HPP_
#define _PALETTE_OFFMODE_HPP_

class PaletteOffMode : public Palette
{
	CRGB* palette;
	
public:
	PaletteOffMode();
	~PaletteOffMode();
	CRGB* getColor(int);
};

#endif
