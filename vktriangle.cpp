#include "vktriangle.h"
#include "vertex.h"
#include "opg1.h"
#include "opg2.h"
#include "opg3.h"

VkTriangle::VkTriangle() : VisualObject()
{

   mVertices = getVertices1();
    //mVertices = getVertices2();
    //mVertices = getVertices3();

}
