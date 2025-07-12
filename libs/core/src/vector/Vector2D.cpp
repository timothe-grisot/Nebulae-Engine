#include "nebulae/core/vector/Vector2D.hpp"

#include <cmath>

namespace nebulae {

double Vector2D::magnitude() const {
    return sqrt(pow(this->x, 2) + pow(this->y, 2));
}

double Vector2D::mag() const {
    return this->magnitude();
}

void Vector2D::normalize() {
    const double mag = this->mag();
    this->x /= mag;
    this->y /= mag;
}

Vector2D Vector2D::normalized() const {
    Vector2D normalized = Vector2D(*this);
    normalized.normalize();
    return normalized;
};

double Vector2D::distance(const Vector2D& v0, const Vector2D& v1) {
    return sqrt(pow(v0.x - v1.x, 2) + pow(v0.y - v1.y, 2));
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

} // namespace nebulae
