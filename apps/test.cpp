#include <iostream>

#include "nebulae/core/vector/Vector3D.hpp"

using namespace nebulae::core;

int main(const int /*argc*/, const char** /*argv*/) {
    const Vector3D v0 = Vector3D(1, 2, 3);
    std::cout << v0.x << std::endl;
    return 0;
}
