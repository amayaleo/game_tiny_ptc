#pragma once
#include <cstdint>
#include <cmp/component.hpp>
namespace ECS{

struct Component_t ;

    struct  PhysicsComponent_t :public Component_t
    {
        explicit PhysicsComponent_t(EntityID_t eid)
        : Component_t(eid)
        {

        };

        uint32_t x {0} , y {0};
        uint32_t vx {1} , vy {1};
    };


}