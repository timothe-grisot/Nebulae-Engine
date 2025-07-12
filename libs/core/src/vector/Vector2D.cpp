#include "nebulae/core/vector/Vector2D.hpp"

#include <cmath>

namespace nebulae {

void Vector2D::set(const float& x, const float& y) {
    this->x = x;
    this->y = y;
}

double Vector2D::sqrMagnitude() const {
    return Vector2D::dot(*this, *this);
}

double Vector2D::sqrMag() const {
    return this->sqrMagnitude();
}

double Vector2D::magnitude() const {
    return sqrt(this->sqrMag());
}

double Vector2D::mag() const {
    return this->magnitude();
}

void Vector2D::normalize() {
    const double mag = this->mag();
    if (mag == 0) {
        this->set(0, 0);
        return;
    }
    this->x /= mag;
    this->y /= mag;
}

Vector2D Vector2D::normalized() const {
    Vector2D normalized = Vector2D(*this);
    normalized.normalize();
    return normalized;
};

double Vector2D::distance(const Vector2D& vec0, const Vector2D& vec1) {
    return (vec0 - vec1).mag();
}

double Vector2D::dot(const Vector2D& vec0, const Vector2D& vec1) {
    return vec0.x * vec1.x + vec0.y * vec1.y;
}

Vector2D& Vector2D::operator+=(const Vector2D& right) {
    this->x += right.x;
    this->y += right.y;
    return *this;
}

Vector2D& Vector2D::operator-=(const Vector2D& right) {
    this->x -= right.x;
    this->y -= right.y;
    return *this;
}

Vector2D& Vector2D::operator*=(const float& scalar) {
    this->x *= scalar;
    this->y *= scalar;
    return *this;
}

Vector2D& Vector2D::operator/=(const float& scalar) {
    this->x /= scalar;
    this->y /= scalar;
    return *this;
}

const Vector2D Vector2D::ZERO = Vector2D();
const Vector2D Vector2D::UNIT = Vector2D(1, 1);

const Vector2D Vector2D::UP = Vector2D(1, 0);
const Vector2D Vector2D::DOWN = Vector2D(-1, 0);
const Vector2D Vector2D::LEFT = Vector2D(0, 1);
const Vector2D Vector2D::RIGHT = Vector2D(0, -1);

} // namespace nebulae
