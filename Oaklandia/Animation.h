#pragma once
#include <SFML/Graphics.hpp>
#include "AnimationManager.h"

class AnimationManager;
class Animation {
	
public:
	virtual void load(AnimationManager*, int) = 0;
	virtual void update(float) = 0;
	virtual void clean() = 0;

	

private:
	

};