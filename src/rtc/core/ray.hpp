//
// Created by משתמש1 on 12/09/2020.
//

#ifndef RAY_TRACER_RAY_HPP
#define RAY_TRACER_RAY_HPP

#include <glm/glm.hpp>
typedef struct ray//:public colider
{
    union {
        glm::vec3 pos;
        glm::vec3 origin;
    };
    glm::vec3 dir;
    ray(glm::vec3 pos,glm::vec3 dir):pos(pos),dir(glm::normalize(dir))
    {};
    glm::vec3 operator()(float t){ return pos+dir*t;}
}ray;
#endif //RAY_TRACER_RAY_HPP
