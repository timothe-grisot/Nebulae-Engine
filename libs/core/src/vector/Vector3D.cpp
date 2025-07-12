#include "nebulae/core/vector/Vector3D.hpp"

#include <cmath>

namespace nebulae {

double Vector3D::sqrMagnitude() const {
    return Vector3D::dot(*this, *this);
}

double Vector3D::sqrMag() const {
    return this->sqrMagnitude();
}

double Vector3D::magnitude() const {
    return sqrt(this->sqrMag());
}

double Vector3D::mag() const {
    return this->magnitude();
}

void Vector3D::normalize() {
    const double mag = this->mag();
    this->x /= mag;
    this->y /= mag;
    this->z /= mag;
}

Vector3D Vector3D::normalized() const {
    Vector3D normalized = Vector3D(*this);
    normalized.normalize();
    return normalized;
};

double Vector3D::distance(const Vector3D& vec0, const Vector3D& vec1) {
    return (vec0 - vec1).mag();
}

double Vector3D::dot(const Vector3D& vec0, const Vector3D& vec1) {
    return vec0.x * vec1.x + vec0.y * vec1.y + vec0.z * vec1.z;
}

Vector3D& Vector3D::operator+=(const Vector3D& right) {
    this->x += right.x;
    this->y += right.y;
    this->z += right.z;
    return *this;
}

Vector3D& Vector3D::operator-=(const Vector3D& right) {
    this->x -= right.x;
    this->y -= right.y;
    this->z -= right.z;
    return *this;
}

Vector3D& Vector3D::operator*=(const float& scalar) {
    this->x *= scalar;
    this->y *= scalar;
    this->z *= scalar;
    return *this;
}

Vector3D& Vector3D::operator/=(const float& scalar) {
    this->x /= scalar;
    this->y /= scalar;
    this->z /= scalar;
    return *this;
}

const Vector3D Vector3D::ZERO = Vector3D();
const Vector3D Vector3D::UNIT = Vector3D(1, 1, 1);

const Vector3D Vector3D::UP = Vector3D(1, 0, 0);
const Vector3D Vector3D::DOWN = Vector3D(-1, 0, 0);
const Vector3D Vector3D::RIGHT = Vector3D(0, 1, 0);
const Vector3D Vector3D::LEFT = Vector3D(0, -1, 0);
const Vector3D Vector3D::FORWARD = Vector3D(0, 0, 1);
const Vector3D Vector3D::BACKWARD = Vector3D(0, 0, -1);

} // namespace nebulae
