#pragma once

#include <ostream>

#include "nebulae/core/vector/Vector3D.hpp"

namespace nebulae {

// Binary arithmetic operators
Vector3D operator+(const Vector3D& left, const Vector3D& right);
Vector3D operator-(const Vector3D& left, const Vector3D& right);
Vector3D operator*(const float& scalar, const Vector3D& vec);
Vector3D operator/(const Vector3D& vec, const float& scalar);

// Unary arithmetic operators
Vector3D operator-(const Vector3D& vec);

// Comparison operators
bool operator==(const Vector3D& left, const Vector3D& right);
bool operator!=(const Vector3D& left, const Vector3D& right);

// Stream operators
std::ostream& operator<<(std::ostream& os, const Vector3D& vec);

} // namespace nebulae
