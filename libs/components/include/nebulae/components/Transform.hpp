#pragma once

#include "nebulae/core/comp/Component.hpp"
#include "nebulae/core/vector/Vector3D.hpp"

namespace nebulae {

class Transform : public Component {
  public:
    // Constructors
    explicit Transform() {};

    // Fields
    Vector3D position;
};

} // namespace nebulae
