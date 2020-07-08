#pragma once
#include <cmp/entity.hpp>
#include <util/typealiases.hpp>


namespace ECS{
    struct Entity_t;

    struct GameContext_t
    {
         virtual ~GameContext_t()=default;
         virtual         Vect_t<Entity_t>&                      getEntities()=0;
         virtual const   Vect_t<Entity_t>&                      getEntities()const = 0;
         virtual         std::vector<PhysicsComponent_t>&    getPhysicsComponent()=0;
         virtual const   std::vector<PhysicsComponent_t>&    getPhysicsComponent() const =0;
    };

}