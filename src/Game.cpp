#include "Game.h"  
#include <raylib.h>  

Game::Game(int width, int height) 
    : m_renderer{ std::make_unique<Renderer>(width, height) }
    , m_player{ std::make_unique<Player>(width / 2.0f, height / 2.0f) }
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
    m_player->onUpdate();
}  
