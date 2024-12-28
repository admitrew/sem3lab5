#include "Dust.h"
#include "Painter.h"

//// Абсолютно новый класс

Dust::Dust(Point _crash, Velocity _velocity)
{
    center = _crash;
    velocity = _velocity;
    color = Color(0.98, 0.83, 0.2);
    clock.restart();
}

void Dust::update() // Через время частицы пропадают
{
    double elapsedTime = clock.getElapsedTime().asSeconds();
    if (elapsedTime > timeleft)
    {
        live = false;
    }
}
Velocity Dust::getVelocity() const
{
    return velocity;
}
Point Dust::getCenter() const
{
    return center;
}
void Dust::setCenter(const Point& _center)
{
    center = _center;
}

void Dust::draw(Painter& painter) const {
    painter.draw(center, radius, color);
}

bool Dust::isAlive() const
{
    return live;
}

double Dust::timer() const
{
    return timeleft;
}