#include "Behavior.hpp"

#ifndef _BEHAVIOR_SPARK_HPP_
#define _BEHAVIOR_SPARK_HPP_

class BehaviorSpark : public Behavior
{
	uint8_t offset;
	uint8_t pick_delay;
	uint8_t pick_timer;
	
public:
	BehaviorSpark();
	void setOffset(uint8_t);
	void doBehaviour(Palette*, CRGB*);
	void setPickerDelay(uint8_t);
};

#endif
