#pragma once

#include "entity.h"
#include "screen.h"

class Snake : public Entity
{
private:
    unsigned short int length;
    Entity mytail[15];
    bool tail[15];
public:
    Snake(const unsigned short int X = 25, const unsigned short int Y = 25, const unsigned short int L = 3) : Entity(X,Y)
    {
        setLength(L);
    }
    ~Snake() {}

    void setLength(const int L)
    {
        length = L;
    }
    int getLength() const
    {
        return length;
    }

    void Ate()
    {
        tail[length]=true;
        length++;
        unsigned short int i;
        for(i=length-1; i > 0; i--)
        {
            mytail[i] = mytail[i-1];
        }
        mytail[0]= new Entity(position.x, position.y);
    }

    void print(Screen& SCR)
    {
        SCR.screen[position.x-1][position.y-1]=true;
        unsigned short int i;
        for(i=0; i <length; i++)
        {
            mytail[i].print(SCR);
        }
    }
};
