#include "Behavior.hpp"

#ifndef _BEHAVIOR_REVOLVER_HPP_
#define _BEHAVIOR_REVOLVER_HPP_

class BehaviorRevolver : public Behavior
{
	uint8_t offset;
	uint8_t strip_cycle;
	
public:
	BehaviorRevolver();
	void setOffset(uint8_t);
	void doBehaviour(Palette*, CRGB*);
};

#endif
