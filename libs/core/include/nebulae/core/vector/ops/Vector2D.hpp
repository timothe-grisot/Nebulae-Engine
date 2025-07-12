#pragma once

#include <ostream>

#include "nebulae/core/vector/Vector2D.hpp"

namespace nebulae {

// Binary arithmetic operators
Vector2D operator+(const Vector2D& left, const Vector2D& right);
Vector2D operator-(const Vector2D& left, const Vector2D& right);
Vector2D operator*(const float& scalar, const Vector2D& vec);
Vector2D operator/(const Vector2D& vec, const float& scalar);

// Unary arithmetic operators
Vector2D operator-(const Vector2D& vec);

// Comparison operators
bool operator==(const Vector2D& left, const Vector2D& right);
bool operator!=(const Vector2D& left, const Vector2D& right);

// Stream operators
std::ostream& operator<<(std::ostream& os, const Vector2D& vec);

} // namespace nebulae
