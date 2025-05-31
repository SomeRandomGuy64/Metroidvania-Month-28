#pragma once

#include <raylib.h>

class Player {

public:

	Player(float xPos, float yPos);
	~Player() = default;

	void onUpdate();

private:
	void draw();

private:
	
	Vector2 m_position{};
	Vector2 m_velocity{};

};
