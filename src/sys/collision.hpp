#pragma once

namespace ECS{
struct  GameContext_t;

    struct CollisionSystem_t
    {
        explicit CollisionSystem_t()=default;
        bool update (GameContext_t&)const;
    };




}