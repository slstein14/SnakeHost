#include "renderobject.h"

RenderObject::RenderObject()
{
        posX = 3; //starts at 30,30 in matrix (immediately moved by the setup)
        posY = 3;
        sizeX = 10;//size is 10x10px (1 matrix unit)
        sizeY = 10;
}

void RenderObject::setXCoord(int x)
{
    posX=x;
}

int RenderObject::getXCoord()
{
    return posX;
}

void RenderObject::setYCoord(int y)
{
    posY=y;
}

int RenderObject::getYCoord()
{
    return posY;
}
