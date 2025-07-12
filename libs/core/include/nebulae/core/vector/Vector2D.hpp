#pragma once

namespace nebulae {

class Vector2D {
  public:
    // Constructors
    explicit Vector2D(const float& x, const float& y) : x(x), y(y) {};
    explicit Vector2D() : Vector2D(0, 0) {};
    Vector2D(const Vector2D& v) : Vector2D(v.x, v.y) {};

    // Fields
    float x, y;

    // Methods
    double sqrMagnitude() const;
    double sqrMag() const;
    double magnitude() const;
    double mag() const;
    void normalize();
    Vector2D normalized() const;

    // Static methods
    static double distance(const Vector2D&, const Vector2D&);
    static double dot(const Vector2D&, const Vector2D&);

    // Binary arithmetic operators
    Vector2D& operator+=(const Vector2D&);
    Vector2D& operator-=(const Vector2D&);
    Vector2D& operator*=(const float&);
    Vector2D& operator/=(const float&);

    // Static constant fields
    static const Vector2D ZERO;
    static const Vector2D UNIT;
    static const Vector2D UP;
    static const Vector2D DOWN;
    static const Vector2D RIGHT;
    static const Vector2D LEFT;
};

} // namespace nebulae

#include "nebulae/core/vector/ops/Vector2D.hpp"
