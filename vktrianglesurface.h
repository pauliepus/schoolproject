#ifndef VKTRIANGLESURFACE_H
#define VKTRIANGLESURFACE_H
#include <vector>
#include <string>
#include "vertex.h"
#include "Visual_Object.h"


class VkTriangleSurface : public VisualObject
{
public:
    //std::vector<Vertex> mVertices;
    //std::vector<Vertex> getVertices() { return mVertices; }
    VkTriangleSurface();
    VkTriangleSurface(const std::string& filename);
};


#endif // VKTRIANGLESURFACE_H
