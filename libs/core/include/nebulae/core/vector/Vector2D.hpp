#pragma once

namespace nebulae::core {

class Vector2D {
  public:
    // Constructors & destructor
    Vector2D(const float& x, const float& y) : x(x), y(y) {};
    Vector2D() : Vector2D(0, 0) {};
    Vector2D(const Vector2D& v) : Vector2D(v.x, v.y) {};

    // Fields
    float x, y;

    // Methods
    double magnitude() const;
    double mag() const { return this->magnitude(); }
    void normalize();
    Vector2D normalized() const;

    // Static methods
    double distance(const Vector2D& v0, const Vector2D& v1);

    // Static constant fields
    static const Vector2D ZERO;
    static const Vector2D UNIT;
};

} // namespace nebulae::core
