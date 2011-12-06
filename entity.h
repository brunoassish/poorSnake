#pragma once

#include "coord.h"
#include "screen.h"

class Entity
{
    protected:
        Coord position;
    public:
        Entity(unsigned short int X, unsigned short int Y)
        {
            position.x = X;
            position.y = Y;
        }
        Entity() {}
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
        virtual void up()
        {
            position.y--;
        }
        virtual void down()
        {
            position.y++;
        }
        virtual void right()
        {
            position.x++;
        }
        virtual void left()
        {
            position.x--;
        }
        void operator= (Entity* ET)
        {
            setPos(ET->getPos());
        }
};
