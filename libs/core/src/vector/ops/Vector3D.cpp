#include "nebulae/core/vector/Vector3D.hpp"

namespace nebulae {

Vector3D operator+(const Vector3D& left, const Vector3D& right) {
    Vector3D res(left);
    res += right;
    return res;
}

Vector3D operator-(const Vector3D& left, const Vector3D& right) {
    Vector3D res(left);
    res -= right;
    return res;
}

Vector3D operator*(const float& scalar, const Vector3D& vec) {
    Vector3D res(vec);
    res *= scalar;
    return res;
}

Vector3D operator/(const Vector3D& vec, const float& scalar) {
    Vector3D res(vec);
    res /= scalar;
    return res;
}

Vector3D operator-(const Vector3D& vec) {
    return -1 * vec;
}

bool operator==(const Vector3D& left, const Vector3D& right) {
    return left.x == right.x && left.y == right.y && left.z == right.z;
}

bool operator!=(const Vector3D& left, const Vector3D& right) {
    return !(left == right);
}

std::ostream& operator<<(std::ostream& os, const Vector3D& vec) {
    os << "Vector3D(" << vec.x << ", " << vec.y << ", " << vec.z << ")";
    return os;
}

} // namespace nebulae
