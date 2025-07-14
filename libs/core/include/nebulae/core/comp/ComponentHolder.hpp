#pragma once

#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>

#include "nebulae/core/comp/Component.hpp"

namespace nebulae {

class ComponentHolder {
  public:
    // Methods
    template <typename T> std::shared_ptr<T> addComponent();
    template <typename T> std::shared_ptr<T> getComponent();

  private:
    // Fields
    std::vector<std::shared_ptr<Component>> components;
};

} // namespace nebulae

#include "nebulae/core/comp/ComponentHolder.ipp"
