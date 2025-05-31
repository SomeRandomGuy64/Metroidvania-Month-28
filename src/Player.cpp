#include "Player.h"

Player::Player(float xPos, float yPos)
	: m_position{ xPos, yPos }
	, m_velocity{ 0.0f, 0.0f }
{

}

void Player::onUpdate() {
	draw();
}

void Player::draw() {
	DrawCircle(
		static_cast<int>(m_position.x), 
		static_cast<int>(m_position.y), 
		10.0f, 
		RED
	);
}