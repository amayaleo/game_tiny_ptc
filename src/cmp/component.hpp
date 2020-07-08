#pragma once
#include <cstdint>
#include <util/typealiases.hpp>

namespace ECS
{
    struct Component_t
    {
        explicit Component_t(EntityID_t eid) 
        : entityID { eid }
        {};

    private:
        ComponentID_t ComponentID { ++ nextID } ;
        EntityID_t entityID { 0 };
        inline static ComponentID_t nextID { 0 } ;
    }; 
    
} // namespace ECS
