#include "nebulae/core/vector/Vector3D.hpp"

#include <cmath>

namespace nebulae::core {

double Vector3D::magnitude() const {
    return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
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

const Vector3D Vector3D::ZERO = Vector3D();
const Vector3D Vector3D::UNIT = Vector3D(1, 1, 1);

} // namespace nebulae::core
