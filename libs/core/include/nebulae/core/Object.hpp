#pragma once

#include <string>

namespace nebulae {

class Object {
  public:
    // Constructors
    explicit Object(const std::string& name) : id(COUNTER++), name(name) {};
    explicit Object() : Object("Object_" + std::to_string(COUNTER)) {};

    // Fields
    unsigned long id;
    std::string name;

  private:
    // Static fields
    inline static unsigned long COUNTER = 0;
};

} // namespace nebulae
