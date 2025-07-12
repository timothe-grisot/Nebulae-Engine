#pragma once

namespace nebulae {

class Vector2D {
  public:
    // Constructors
    explicit Vector2D(const float& x = 0, const float& y = 0) : x(x), y(y) {};
    Vector2D(const Vector2D& v) : Vector2D(v.x, v.y) {};

    // Fields
    float x, y;

    // Methods
    double magnitude() const;
    double mag() const;
    void normalize();
    Vector2D normalized() const;

    // Static methods
    double distance(const Vector2D& v0, const Vector2D& v1);

    // Binary arithmetic operators
    Vector2D& operator+=(const Vector2D& right);
    Vector2D& operator-=(const Vector2D& right);
    Vector2D& operator*=(const float& scalar);
    Vector2D& operator/=(const float& scalar);

    // Static constant fields
    static const Vector2D ZERO;
    static const Vector2D UNIT;
};

} // namespace nebulae

#include "nebulae/core/vector/ops/Vector2D.hpp"
