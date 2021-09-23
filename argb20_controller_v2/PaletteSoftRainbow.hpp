#include <FastLED.h>
#include "Palette.hpp"

#ifndef _PALETTE_SOFT_RAINBOW_HPP_
#define _PALETTE_SOFT_RAINBOW_HPP_

class PaletteSoftRainbow : public Palette
{
	CRGB* palette;
	
public:
	PaletteSoftRainbow();
	~PaletteSoftRainbow();
	CRGB* getColor(int);
};

#endif
