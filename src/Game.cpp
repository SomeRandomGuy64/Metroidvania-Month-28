#include "Game.h"

#include <raylib.h>

Game::Game() {

	const int SCREEN_WIDTH{ 1280 };
	const int SCREEN_HEIGHT{ 720 };

	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Metroidvania Month 28");
	SetTargetFPS(60);

}

void Game::run() {

	while (!WindowShouldClose()) {
		BeginDrawing();

		ClearBackground(RAYWHITE);
		DrawText("Hello, world!", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
	}

	CloseWindow();
}