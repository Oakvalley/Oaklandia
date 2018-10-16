#include "AnimationManager.h"
#include <iostream>



AnimationManager::AnimationManager()
{
}


AnimationManager::~AnimationManager()
{
}

void AnimationManager::load(AnimationManager* p_animationManager, int numberOfFrames) {
	//p_animation->setFrameSize(animationSize);
	//p_animationManager->setNumberOfFrames(numberOfFrames);

	int p = p_animationManager->getNumberOfFrames();
	std::cout << p << std::endl;
}

void AnimationManager::update(float dt) {

}

void AnimationManager::clean() {
	while (!m_animation.empty()) {
		m_animation.pop_back();
	}
}