#include "Behavior.hpp"

#ifndef _BEHAVIOR_STATIC_HPP_
#define _BEHAVIOR_STATIC_HPP_

class BehaviorStatic : public Behavior
{
public:
	BehaviorStatic();
	void setOffset(uint8_t);
	uint8_t setPattern(Palette*, CRGB*, uint8_t);
};

#endif
