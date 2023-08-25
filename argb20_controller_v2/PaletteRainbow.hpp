#include <FastLED.h>
#include "Palette.hpp"

#ifndef _PALETTE_RAINBOW_HPP_
#define _PALETTE_RAINBOW_HPP_

class PaletteRainbow : public Palette
{
	CRGB* palette;
	
public:
	PaletteRainbow();
	~PaletteRainbow();
	CRGB* getColor(int);
};

#endif
