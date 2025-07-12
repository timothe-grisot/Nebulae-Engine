#pragma once

namespace nebulae {

class Vector3D {
  public:
    // Constructors
    explicit Vector3D(const float& x = 0, const float& y = 0, const float& z = 0) : x(x), y(y), z(z) {};
    Vector3D(const Vector3D& v) : Vector3D(v.x, v.y, v.z) {};

    // Fields
    float x, y, z;

    // Methods
    double magnitude() const;
    double mag() const;
    void normalize();
    Vector3D normalized() const;

    // Static methods
    double distance(const Vector3D& v0, const Vector3D& v1);

    // Binary arithmetic operators
    Vector3D& operator+=(const Vector3D& right);
    Vector3D& operator-=(const Vector3D& right);
    Vector3D& operator*=(const float& scalar);
    Vector3D& operator/=(const float& scalar);

    // Static constant fields
    static const Vector3D ZERO;
    static const Vector3D UNIT;
};

} // namespace nebulae

#include "nebulae/core/vector/ops/Vector3D.hpp"
