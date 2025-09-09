#pragma once
#include<SFML/Graphics.hpp>
#include<memory>

class Tetris {
    std::shared_ptr<sf::RenderWindow> window;
    sf::Texture tiles;
    std::shared_ptr<sf::Sprite> sprite;
    protected :
    voide event ();
    void draw();
    public :
    Tetris();
    void run();
}