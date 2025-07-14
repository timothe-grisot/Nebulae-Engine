#pragma once

namespace nebulae {

class ComponentHolder;

class Component {
  public:
    // Constructors & destructor
    explicit Component(ComponentHolder* holder) : holder(holder) {};
    explicit Component() {};
    virtual ~Component() = default;

    // Methods
    void setComponentHolder(ComponentHolder*);

  private:
    // Fields
    ComponentHolder* holder;
};

} // namespace nebulae
