#pragma once

namespace nebulae {

class Vector3D {
  public:
    // Constructors
    explicit Vector3D(const float& x, const float& y, const float& z) : x(x), y(y), z(z) {};
    explicit Vector3D() : Vector3D(0, 0, 0) {};
    Vector3D(const Vector3D& v) : Vector3D(v.x, v.y, v.z) {};

    // Fields
    float x, y, z;

    // Methods
    double sqrMagnitude() const;
    double sqrMag() const;
    double magnitude() const;
    double mag() const;
    void normalize();
    Vector3D normalized() const;

    // Static methods
    static double distance(const Vector3D&, const Vector3D&);
    static double dot(const Vector3D&, const Vector3D&);

    // Binary arithmetic operators
    Vector3D& operator+=(const Vector3D&);
    Vector3D& operator-=(const Vector3D&);
    Vector3D& operator*=(const float&);
    Vector3D& operator/=(const float&);

    // Static constant fields
    static const Vector3D ZERO;
    static const Vector3D UNIT;
    static const Vector3D UP;
    static const Vector3D DOWN;
    static const Vector3D RIGHT;
    static const Vector3D LEFT;
    static const Vector3D FORWARD;
    static const Vector3D BACKWARD;
};

} // namespace nebulae

#include "nebulae/core/vector/ops/Vector3D.hpp"
