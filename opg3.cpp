#include "opg3.h"

#define M_PI 3.14159265358979323846

float f(const float x, const float y){
    return x*x*y;
}

std::vector<Vertex> getVertices3()
{
    std::vector<Vertex> Vertices;

    float xmin=0.0f, xmax=1.0f, ymin=0.0f, ymax=1.0f, h=0.25f;
    for (auto x=xmin; x<xmax; x+=h)
    {
        for (auto y=ymin; y<ymax; y+=h)
        {
            float z = f(x,y);
            Vertices.push_back(Vertex{x,y,z,x,y,z});
            z = f(x+h,y);
            Vertices.push_back(Vertex{x+h,y,z,x,y,z});
            z = f(x, y+h);
            Vertices.push_back(Vertex{x,y+h,z,x,y,z});
            Vertices.push_back(Vertex{x,y+h,z,x,y,z});
            z = f(x+h,y);
            Vertices.push_back(Vertex{x+h,y,z,x,y,z});
            z = f(x+h,y+h);
            Vertices.push_back(Vertex{x+h,y+h,z,x,y,z});
        }
    }
    return Vertices;
}
