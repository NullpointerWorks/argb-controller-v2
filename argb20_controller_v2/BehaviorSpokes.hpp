#include "Behavior.hpp"

#ifndef _BEHAVIOR_SPOKES_HPP_
#define _BEHAVIOR_SPOKES_HPP_

class BehaviorSpokes : public Behavior
{
	uint8_t offset;
	uint8_t strip_cycle;
	
public:
	BehaviorSpokes();
	void setOffset(uint8_t);
	uint8_t setPattern(Palette*, CRGB*, uint8_t);
};

#endif
