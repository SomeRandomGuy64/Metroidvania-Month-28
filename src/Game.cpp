#include "Game.h"  
#include <raylib.h>  

Game::Game(int width, int height) 
    : m_renderer{ std::make_unique<Renderer>(width, height) }
{

}  

void Game::run() {  
    while (!WindowShouldClose()) {  
        onUpdate();  
    }  
    CloseWindow();  
}  

void Game::onUpdate() {
    m_renderer->onUpdate();
}  
