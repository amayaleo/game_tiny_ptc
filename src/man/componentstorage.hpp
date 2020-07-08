#pragma once
#include <vector>
//#include <cmp/physics.hpp>
#include <util/typealiases.hpp>

namespace ECS 
{
struct PhysicsComponent_t;

    struct ComponentStorage_t
    {
        explicit ComponentStorage_t(std::size_t initialsize)
        {
            m_physicsComponents.reserve(initialsize);
        }

        ComponentStorage_t(const ComponentStorage_t&) = delete;
        ComponentStorage_t(ComponentStorage_t&&) = delete;

        ComponentStorage_t& operator=(const ComponentStorage_t&) = delete;
        ComponentStorage_t& operator=( ComponentStorage_t&&) = delete;
        
        //PhysicsComponent_t& createPhysicsComponent(EntityID_t);

        std::vector<PhysicsComponent_t>& getPhysicsComponent(){ return m_physicsComponents;};
        const std::vector<PhysicsComponent_t>& getPhysicsComponent() const { return m_physicsComponents;};




        PhysicsComponent_t& createPhysicsComponent(EntityID_t eid)
        {
            auto& cmp =  m_physicsComponents.emplace_back(eid); 
            return cmp;
        }

    private:
        std::vector<PhysicsComponent_t> m_physicsComponents {};
    };

}