#pragma once

#include "Ability.h"

namespace qge{

/// An Ability that can simply be used with no target.
/// @author Abdullah Aghazadah
class NoTargetAbility : public Ability {
public:
    NoTargetAbility(Entity& owner, Sprite* icon = nullptr);

    void use();

protected:
    // uses template method pattern (use does some common work, then delgates
    // to virtual function)
    virtual void useImplementation() = 0;
};

}
