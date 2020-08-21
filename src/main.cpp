// https://www.youtube.com/watch?v=exvGWo1PRfA&list=PLmxqg54iaXrhTqZxylLPo0nov0OoyJqiS&index=32

extern "C" {
    #include <tinyPTC/src/tinyptc.h>
  }
#include <cstdint>
#include <iostream>
#include <memory>
#include <man/entitymanager.hpp>
#include <util/gamecontext.hpp>
#include <sys/collision.hpp>
#include <sys/physics.hpp>
#include <sys/rendersystem.hpp>


constexpr uint32_t kSCRWIDTH { 640 };
constexpr uint32_t kSCRHEIGHT { 360 };

int main(void){
  
   try{
     
        ECS::EntityManager_t entityMan;
        entityMan.createEntity(20,40,16,16,0x00ffffff);
        entityMan.createEntity(80,10,"assets/ninja.png");
        entityMan.createEntity(200,70,"assets/ninja.png");
        
        const ECS::RenderSystem_t render{ kSCRWIDTH , kSCRHEIGHT};
        ECS::PhysicsSystem_t Physics;
        ECS::CollisionSystem_t Collision;
 
       while(render.update(entityMan))
       {
         Physics.update(entityMan);
         Collision.update(entityMan);
       }

       
   }
   catch(...){
     std::cout<< "break program"<<std::endl;
   }
return 0;
}





