#pragma once

#include "Renderer.h"
#include "Player.h"

#include <memory>

class Game {

public:

	Game(int width, int height);
	~Game() = default;

	void run();

private:

	void onUpdate();

private:

	std::unique_ptr<Renderer> m_renderer;
	std::unique_ptr<Player> m_player;

};
