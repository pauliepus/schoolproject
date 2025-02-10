#include "opg2.h"

std::vector<Vertex> getVertices2()
{
    std::vector<Vertex> Vertices;

    float x,y,z;
    z=0;
    for(float i=0;i<6*6.14;i+=0.1){
        x=cos(i);
        y=sin(i);
        z += 0.1;

        Vertices.push_back(Vertex{x,y,z,1.0,0.5,0,0,0});
    }


    return Vertices;
}
