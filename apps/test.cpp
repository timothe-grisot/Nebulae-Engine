#include <iostream>

#include "nebulae/core/Object.hpp"
#include "nebulae/core/vector/Vector3D.hpp"

using namespace nebulae;

class Transform : public Component {
  public:
    // Constructors
    explicit Transform() {};

    // Fields
    Vector3D position;
};

int main(const int /*argc*/, const char** /*argv*/) {
    // Create object
    auto obj = std::make_unique<Object>("MyObject");

    // Add Transform component
    obj->addComponent<Transform>();
    obj->getComponent<Transform>()->position = Vector3D(1, 1, 1);

    // Display object position
    std::cout << "Initial position: " << obj->getComponent<Transform>()->position << std::endl;

    return 0;
}
