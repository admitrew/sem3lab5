#pragma once
#include "Painter.h"
#include "Point.h"
#include "Velocity.h"

class Ball {
public:
    Ball(Point cords, Velocity velocity, Color color, double radius, bool isCollidable); //// Сделали крутой конструктор
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& _center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    bool getIsCollidable() const; //// Жёстко чекаем на столкновения
private: //// Добавили много приватных параметров
    double radius;
    double mass;
    Point center;
    Velocity velocity;
    Color color;
    bool isCollidable;
};
