#include "Ball.hpp"
#include <cmath>

/**
 * Задает скорость объекта
 * @param velocity новое значение скорости
 */
void Ball::setVelocity(const Velocity& _velocity) {
    velocity = _velocity; //// Доработка
}

/**
 * @return скорость объекта
 */
Velocity Ball::getVelocity() const {
    return velocity; //// Доработка
}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const {
    painter.draw(center, radius, color); //// Доработка
}

/**
 * Задает координаты центра объекта
 * @param center новый центр объекта
 */
void Ball::setCenter(const Point& _center) {
    center = _center; //// Доработка
}

/**
 * @return центр объекта
 */
Point Ball::getCenter() const {
    return center; //// Доработка
}

/**
 * @brief Возвращает радиус объекта
 * @details обратите внимание, что метод setRadius()
 * не требуется
 */
double Ball::getRadius() const {
    return radius; //// Доработка
}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    return M_PI*pow(radius,3)*4./3.; //// Доработка
}
/**
 * @brief Возвращает true или flase.
 * @details Информирует о том подвергается ли объект столкновениям с другими объектами.
 */
bool Ball::getIsCollidable() const //// Добавили обработку столкновений
{
    return isCollidable;
}

/**
 * @brief Конструктор объекта Ball
 * @param _center координаты центра шара
 * @param _velocity вектор скорости шара
 * @param _color цвет шара
 * @param _radius радиус шара 
 */
Ball::Ball(Point _center, Velocity _velocity, Color _color, double _radius, bool _isCollidable)
{
    center = _center;
    velocity = _velocity;
    color = _color;
    radius = _radius;
    isCollidable = _isCollidable;

}
