#include "Behavior.hpp"

#ifndef _BEHAVIOR_REVOLVER_HPP_
#define _BEHAVIOR_REVOLVER_HPP_

class BehaviorRevolver : public Behavior
{
	uint8_t offset;
	
public:
	BehaviorRevolver();
	void setOffset(uint8_t);
	void setPattern(Palette*, CRGB*, uint8_t*);
};

#endif
