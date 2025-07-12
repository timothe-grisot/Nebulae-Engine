#include "nebulae/core/vector/ops/Vector2D.hpp"

namespace nebulae {

Vector2D operator+(const Vector2D& left, const Vector2D& right) {
    Vector2D res(left);
    res += right;
    return res;
}

Vector2D operator-(const Vector2D& left, const Vector2D& right) {
    Vector2D res(left);
    res -= right;
    return res;
}

Vector2D operator*(const float& scalar, const Vector2D& vec) {
    Vector2D res(vec);
    res *= scalar;
    return res;
}

Vector2D operator/(const Vector2D& vec, const float& scalar) {
    Vector2D res(vec);
    res /= scalar;
    return res;
}

Vector2D operator-(const Vector2D& vec) {
    return -1 * vec;
}

bool operator==(const Vector2D& left, const Vector2D& right) {
    return left.x == right.x && left.y == right.y;
}

bool operator!=(const Vector2D& left, const Vector2D& right) {
    return !(left == right);
}

std::ostream& operator<<(std::ostream& os, const Vector2D& vec) {
    os << "Vector2D(" << vec.x << ", " << vec.y << ")";
    return os;
}

} // namespace nebulae
