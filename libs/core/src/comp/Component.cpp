#include "nebulae/core/comp/Component.hpp"

namespace nebulae {

void Component::setComponentHolder(ComponentHolder* holder) {
    this->holder = holder;
}

} // namespace nebulae
