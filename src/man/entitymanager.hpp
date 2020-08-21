#pragma once

#include <algorithm>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

//#include <cmp/physics.hpp>
#include <util/typealiases.hpp>
//#include <util/gamecontext.hpp>
#include <man/componentstorage.hpp>
namespace ECS{


	struct GameContext_t;
	struct ComponentStorage_t;

	struct  EntityManager_t : public GameContext_t 
	{
		static constexpr std::size_t kNUMINITIALENTITIES { 1000 } ;	

		explicit EntityManager_t()
		: GameContext_t { } 
		{
				//m_Entity.reserve(kNUMINITIALENTITIES);
		};
		
		//void createEntity(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t) ;

	void createEntity( uint32_t x , uint32_t y , uint32_t i  ,uint32_t j , uint32_t color )
	{
		// auto& e =m_Entity.emplace_back("name");
		// auto& ph = m_components.createPhysicsComponent();
		// e.phy = &ph;
		// ph.x = x; 
		// ph.y = y;
	}



	 	void createEntity(uint32_t,uint32_t,std::string);

	 	// const Vect_t<Entity_t>& getEntities() const { return m_Entity; };
	 	//       Vect_t<Entity_t>& getEntities() { return m_Entity; };
	 	// const std::vector<PhysicsComponent_t>& getPhysicsComponent() const {};
        //   	  std::vector<PhysicsComponent_t>& getPhysicsComponent()	   {};

	 	const Vect_t<Entity_t>& getEntities() const override { return m_Entity; };
	 	      Vect_t<Entity_t>& getEntities()  override { return m_Entity; };

	 	const std::vector<PhysicsComponent_t>& getPhysicsComponent() const override {};
          	  std::vector<PhysicsComponent_t>& getPhysicsComponent()	   override {};
	//private:
	 	Vect_t<Entity_t>m_Entity{};
		ComponentStorage_t m_components;
		};

}

