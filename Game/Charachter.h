#pragma once
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "../Other/Direction.h"
#include "Map.h"
#include <stack>

class Charachter {
private:
    sf::RectangleShape* pacman; // текстура
    sf::Color* color; // цвет пакмана
    Direction direction;
    sf::Clock clock;
    float time;
    Map* map;
    const sf::String* pMap;
    int PosX, PosY;
    std::stack<Direction> stack; // стэк операций
    bool isCollision();
    void resolveCollision(bool);
    void update(float);
    float x, y, w, h, dx, dy, speed;

public:
    virtual void run();
    virtual void draw(sf::RenderWindow *);
    Charachter(int, int, int, int, Map*);
    Charachter() {}
    float getX();
    float getY();
};

