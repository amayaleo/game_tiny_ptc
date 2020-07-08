#pragma once
#include <cstdint>
#include <memory>
#include <util/gamecontext.hpp>
#include <util/typealiases.hpp>
#include <cmp/entity.hpp>


namespace ECS{

	//foward declaration
	struct EntityManager_t;
	//struct Entity_t;
	struct GameContext_t;

	struct RenderSystem_t
	{
		explicit RenderSystem_t(uint32_t,uint32_t);
		//explicit RenderSystem_t(uint32_t,uint32_t,EntityManager_t&);
		~RenderSystem_t();
		bool update(const GameContext_t&) const;
		void drawAllEntities(const Vect_t<Entity_t>&)const;
		void drawEntity(const Entity_t&)const;
		//const
		static constexpr uint32_t kR = 0x00FF0000;

        private:
			const uint32_t m_w { 0 } , m_h { 0 };       
			std::unique_ptr<uint32_t[]> m_framebuffer{ nullptr };
			//EntityManager_t& m_EntMan;
			
		
	};
}//end namespace ECS
