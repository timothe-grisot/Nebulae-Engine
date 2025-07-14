#pragma once

#include "nebulae/core/comp/ComponentHolder.hpp"

namespace nebulae {

template <typename T> std::shared_ptr<T> ComponentHolder::addComponent() {
    // If component already exists, return it
    std::shared_ptr<T> component = this->getComponent<T>();
    if (component != nullptr) {
        return component;
    }

    // Otherwise, create it
    component = std::make_shared<T>();
    component->setComponentHolder(this);
    this->components.push_back(component);
    return component;
}

template <typename T> std::shared_ptr<T> ComponentHolder::getComponent() {
    for (std::shared_ptr<Component> component : this->components) {
        std::shared_ptr<T> found = std::dynamic_pointer_cast<T>(component);
        if (found) {
            return found;
        }
    }
    return nullptr;
}

} // namespace nebulae
