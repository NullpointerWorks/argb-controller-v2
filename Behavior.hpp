#include <FastLED.h>
#include "Palette.hpp"

#ifndef _BEHAVIOR_HPP_
#define _BEHAVIOR_HPP_

class Behavior
{
public:
	virtual ~Behavior() {}
	virtual void setOffset(uint8_t);
	virtual void doBehaviour(Palette*, CRGB*);
};

#endif
