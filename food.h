#pragma once

#include "entity.h"
#include "screen.h"

class Food : public Entity
{
    public:
        Food(const unsigned short int X = 25, const unsigned short int Y = 25) : Entity(X,Y) {autoSet();}
        ~Food() {}

        void autoSet()
        {
            position.x = 1+ rand() %48;
            position.y = 1+ rand() %48;
        }
        void print(Screen& SCR)
        {
            SCR.screen[position.x-1][position.y-1]=true;
        }
};

