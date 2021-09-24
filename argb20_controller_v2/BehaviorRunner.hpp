#include "Behavior.hpp"

#ifndef _BEHAVIOR_RUNNER_HPP_
#define _BEHAVIOR_RUNNER_HPP_

class BehaviorRunner : public Behavior
{
	uint8_t offset;
	uint8_t strip_cycle;
	
public:
	BehaviorRunner();
	void setOffset(uint8_t);
	void setPattern(Palette*, CRGB*, uint8_t*);
};

#endif
