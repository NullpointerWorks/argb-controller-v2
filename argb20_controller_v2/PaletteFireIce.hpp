#include <FastLED.h>
#include "Palette.hpp"

#ifndef _PALETTE_FIREICE_HPP_
#define _PALETTE_FIREICE_HPP_

class PaletteFireIce : public Palette
{
	CRGB* palette;
	
public:
	PaletteFireIce();
	~PaletteFireIce();
	CRGB* getColor(int);
};

#endif
