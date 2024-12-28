#pragma once
#include "Point.h"
#include "Velocity.h"
#include "Color.h"
#include "Painter.h"
#include <SFML/Graphics.hpp>

//// Определение абсолютно нового класса

class Dust 
{
    public:

    Dust(Point _crash, Velocity _velocity);
    Velocity getVelocity() const;
    Point getCenter() const;
    void setCenter(const Point& _center);
    void draw(Painter &painter) const;
    bool isAlive() const;
    double timer() const;
    void update();

    private:
    Point center;
    Velocity velocity;
    Color color;
    double radius = 10;
    double timeleft = 0.5;
    bool live = true;
    sf::Clock clock;
};