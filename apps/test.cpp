#include <iostream>

#include "nebulae/core/vector/Vector3D.hpp"

using namespace nebulae;

int main(const int /*argc*/, const char** /*argv*/) {
    const Vector3D vec0 = Vector3D(1.2, 2.4, 3.6);
    Vector3D vec1 = -vec0;
    std::cout << vec1 << std::endl;
    return 0;
}
