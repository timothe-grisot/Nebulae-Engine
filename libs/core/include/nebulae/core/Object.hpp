#pragma once

#include <string>

#include "nebulae/core/Identifier.hpp"
#include "nebulae/core/comp/ComponentHolder.hpp"

namespace nebulae {

class Object : public Identifier, public ComponentHolder {
  public:
    // Constructors
    explicit Object(const std::string& name) : Identifier(), name(name) {};
    explicit Object() : Object("Object") {};

    // Fields
    std::string name;
};

} // namespace nebulae
