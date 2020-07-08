
#include <iostream>
#include <memory>
#include <algorithm>
#include <cstdint>
#include <cmp/physics.hpp>
#include <man/entitymanager.hpp>

#include <util/gamecontext.hpp>


namespace ECS 
{
	// EntityManager_t::EntityManager_t(){
	// 	m_Entity.reserve(kNUMINITIALENTITIES);
	// }

	// void EntityManager_t::createEntity( uint32_t x , uint32_t y , std::string filename )
	// {
	// 	//auto& e =m_Entity.emplace_back(filename);
	// 	//auto& ph = m_components.createPhysicsComponent(e.entityID);
	// 	//e.phy = &ph;
	// 	//ph.x = x; 
	// 	//ph.y = y;
	// }


	void EntityManager_t::createEntity( uint32_t x , uint32_t y , std::string  filename )
	{
		//auto& e =m_Entity.emplace_back("name");
		//auto& ph = m_components.createPhysicsComponent();
		//e.phy = &ph;
		//ph.x = x; 
		//ph.y = y;
	}
}

