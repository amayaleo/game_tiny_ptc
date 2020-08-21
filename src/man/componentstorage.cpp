#include <man/componentstorage.hpp>
#include <cmp/physics.hpp>
#include <util/typealiases.hpp>
namespace ECS{


     // PhysicsComponent_t& 
     // ComponentStorage_t::createPhysicsComponent(EntityID_t eid)
     // {

     //   //auto& cmp =  m_physicsComponents.emplace_back(eid); 

     //    //return cmp;
     // }


     PhysicsComponent_t& ComponentStorage_t::createPhysicsComponent(EntityID_t eid)
        {
            auto& cmp =  m_physicsComponents.emplace_back(eid); 
            return cmp;
        }

}