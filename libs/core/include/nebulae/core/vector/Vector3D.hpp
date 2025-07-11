#pragma once

namespace nebulae::core {

class Vector3D {
  public:
    // Constructors & destructor
    Vector3D(const float& x, const float& y, const float& z) : x(x), y(y), z(z) {};
    Vector3D() : Vector3D(0, 0, 0) {};
    Vector3D(const Vector3D& v) : Vector3D(v.x, v.y, v.z) {};

    // Fields
    float x, y, z;

    // Methods
    double magnitude() const;
    double mag() const { return this->magnitude(); }
    void normalize();
    Vector3D normalized() const;

    // Static methods
    double distance(const Vector3D& v0, const Vector3D& v1);

    // Static constant fields
    static const Vector3D ZERO;
    static const Vector3D UNIT;
};

} // namespace nebulae::core
