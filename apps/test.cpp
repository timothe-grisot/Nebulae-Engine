#include <iostream>

#include "nebulae/core/vector/Vector3D.hpp"

using namespace nebulae;

int main(const int /*argc*/, const char** /*argv*/) {
    const Vector3D vec0 = Vector3D(1, 1, 1);
    const Vector3D vec1 = Vector3D(2, 2, 2);
    std::cout << "vec0 = " << vec0 << std::endl;
    std::cout << "vec1 = " << vec1 << std::endl;

    std::cout << "vec0.mag() = " << vec0.mag() << std::endl;
    std::cout << "vec1.mag() = " << vec1.mag() << std::endl;

    std::cout << "Vector3D::distance(vec0, vec1) = " << Vector3D::distance(vec0, vec1) << std::endl;

    return 0;
}
