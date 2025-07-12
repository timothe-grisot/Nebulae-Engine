#include "nebulae/core/vector/Vector3D.hpp"

#include <cmath>

namespace nebulae {

double Vector3D::magnitude() const {
    return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
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

double Vector3D::distance(const Vector3D& v0, const Vector3D& v1) {
    return sqrt(pow(v0.x - v1.x, 2) + pow(v0.y - v1.y, 2) + pow(v0.z - v1.z, 2));
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

} // namespace nebulae
