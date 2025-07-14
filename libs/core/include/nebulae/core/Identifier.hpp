#pragma once

namespace nebulae {

class Identifier {
  public:
    // Constructors
    explicit Identifier() : id(COUNTER++) {};

    // Fields
    const unsigned long id;

  private:
    // Static fields
    inline static unsigned long COUNTER = 0;
};

} // namespace nebulae
