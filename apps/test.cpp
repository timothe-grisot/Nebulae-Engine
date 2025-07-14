#include <iostream>

#include "nebulae/components/Transform.hpp"
#include "nebulae/core/Object.hpp"

using namespace nebulae;

int main(const int /*argc*/, const char** /*argv*/) {
    // Create object
    auto obj = std::make_unique<Object>("MyObject");

    // Add Transform component
    auto objTransform = obj->addComponent<Transform>();
    objTransform->position = Vector3D::ZERO;

    // Display object position
    std::cout << "Initial position: " << obj->getComponent<Transform>()->position << std::endl;

    return 0;
}
