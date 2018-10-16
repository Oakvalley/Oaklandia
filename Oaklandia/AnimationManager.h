#pragma once
#include "Animation.h"
#include "Sprite.h"
#include <vector>

class AnimationManager : public Animation
{
public:
	AnimationManager();
	~AnimationManager();

	void load(AnimationManager*, int);
	void update(float);
	void clean();

	void setFrameSize(sf::IntRect frameSize) { m_frameSize = &frameSize; }
	void setNumberOfFrames(int* frames) { m_numberOfFrames = frames; }
	void setSprite(Sprite sprite) { m_sprite = &sprite; }

	sf::IntRect* getFrameSize() { return m_frameSize; }
	int getNumberOfFrames() { return *m_numberOfFrames; }
	Sprite* getSprite() { return m_sprite; }

private:
	sf::IntRect* m_frameSize;
	int* m_numberOfFrames;
	Sprite* m_sprite;
	std::vector<Animation*> m_animation;
};

