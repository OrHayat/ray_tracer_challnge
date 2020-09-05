//
// Created by משתמש1 on 03/09/2020.
//

#ifndef RAY_TRACER_CANVAS_HPP
#define RAY_TRACER_CANVAS_HPP

template <class T>
struct  Canvas
{
    union {
        struct{
            int height;
            int width;
        };
        int shape[2];
    };
    int stride[2];
    T* data;
    Canvas(int width,int height):height(height),width(width),data(new T[width*height]){
        std::cout<<"width="<<width<<"height="<<height<<std::endl;
        stride[0]=height;
        stride[1]=1;
    }
    void set_pixel(T item,int row_id,int col_id)
    {
        data[row_id*stride[0]+col_id*stride[1]]=item;
    }
    T get_pixel(int i,int j)
    {
        return data[i*stride[0]+j*stride[1]];//=item;
    }
};

#endif //RAY_TRACER_CANVAS_HPP
