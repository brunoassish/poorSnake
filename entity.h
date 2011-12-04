#pragma once

#include "coord.h"
#include "screen.h"

class Entity
{
    protected:
        Coord position;
    public:
        Entity(const unsigned short int X, const unsigned short int Y)
        {
            position.x = X;
            position.y = Y;
        }
        ~Entity() {}
        virtual void print(Screen& SCR)
        {
            SCR.screen[position.x-1][position.y-1]=true;
        }
        void setPos(const unsigned short int X, const unsigned short int Y)
        {
            position.x = X;
            position.y = Y;
        }
        void setPos(const Coord C)
        { setPos(C.x, C.y); }
        Coord getPos()
        {
            return position;
        }
        void up()
        {
            position.y++;
        }
        void down()
        {
            position.y--;
        }
        void right()
        {
            position.x++;
        }
        void left()
        {
            position.x--;
        }
        void operator= (Entity& ET)
        {
            setPos(ET.getPos());
        }
};
