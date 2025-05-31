#include "Renderer.h"

#include <raylib.h>

Renderer::Renderer(int width, int height) 
	: m_width{ width }
	, m_height{ height }
{

	InitWindow(m_width, m_height, "Metroidvania Month 28");
	SetTargetFPS(60);

}

void Renderer::onUpdate() {
	BeginDrawing();
		ClearBackground(RAYWHITE);
	EndDrawing();
}
