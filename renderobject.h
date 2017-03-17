#ifndef RENDEROBJECT_H
#define RENDEROBJECT_H

class RenderObject
{
private:
    int posX, posY;
    int sizeX, sizeY;
    enum direction {Up = 0, Left = 1, Right = 2, Down=3};

public:
    RenderObject();
    void setXCoord(int x);
    int getXCoord();
    void setYCoord(int y);
    int getYCoord();
};

#endif // RENDEROBJECT_H
