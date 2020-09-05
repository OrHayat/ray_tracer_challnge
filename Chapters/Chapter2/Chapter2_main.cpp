//
// Created by משתמש1 on 01/09/2020.
//
#define GLM_FORCE_SWIZZLE
#define STB_IMAGE_WRITE_IMPLEMENTATION

#include <shared/env.hpp>
#include <shared/projectile.hpp>
#include <glm/glm.hpp>
#include <iostream>
#include <rtc/Canvas.hpp>
#include <stb_image_write.h>
int main(int argc, char** argv)
{
    glm::f32vec3 pos(0.0f,1.0f,0.0f);
    glm::f32vec3 speed= glm::normalize(glm::f32vec3(1.0f,1.8f,0.0f))*11.25f;
    rtc::projectile projectile(pos,speed);
    glm::f32vec3 gravity(0.0f,-0.1f,0.0f);
    glm::f32vec3 wind(-0.01f,0.0f,0.0f);
    rtc::env env(gravity,wind);
    int32_t time=0;
    Canvas<glm::i32vec3>canvas(900,550);
    do{
        glm::vec3 col(1.0f,0.0f,0.25f);
        glm::vec2 canvas_pos=projectile.position.xy;
        canvas_pos.y=glm::clamp(canvas_pos.y,0.0f,(float_t )(canvas.height-1));
        canvas_pos.x=glm::clamp(canvas_pos.x,0.0f,(float_t)(canvas.width-1));
//        //xyz
        glm::ivec2 canvas_pos_i=glm::vec2((int)canvas_pos.x,(int)canvas_pos.y);
//        //xy
        canvas.set_pixel(col,canvas_pos_i.y,canvas_pos_i.x);
        printf("position at tick %d was [%d,%d]\n",time,canvas_pos_i.x,canvas_pos_i.y);
//     printf("position at tick %d was [%f ,%f,%f]\n",time,projectile.position.x,projectile.position.y,projectile.position.z);
        time++;
        projectile.tick_(env);
    }while (projectile.position.y>0);
for(int i=0;i<canvas.shape[0];i++)
{
    for(int j=0;j<canvas.shape[1];j++)
    {
//        std::cout<<"i="<<i<<"j="<<j<<std::endl;
        canvas.set_pixel(glm::ivec3(255,0,0),j,i);
    }
}
    int x=stbi_write_bmp("./output123.bmp",canvas.width,canvas.height,3,canvas.data);
//    int x=stbi_write_jpg("./outputtest111.jpg:",canvas.width,canvas.height,3,canvas.data,900);
    std::cout<<"foo";
//    writeppm(canvas,"./output.ppm");
    return 0;
}