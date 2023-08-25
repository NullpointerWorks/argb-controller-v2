#include <FastLED.h>

#ifndef _PALETTE_HPP_
#define _PALETTE_HPP_

class Palette
{
public:
	virtual ~Palette() {};
	virtual CRGB* getColor(int);
};

#endif
