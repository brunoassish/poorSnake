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
    Snake ()
    {
        setPos(30,30);
        setLength(3);
        for (int i = 0; i < 3; i++)
            mytail[i] = new Entity(position.x, position.y-(i+1));
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
        updateTail();
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

    void up()
    {
        updateTail();
        position.y--;
    }
    void down()
    {
        updateTail();
        position.y++;
    }
    void right()
    {
        updateTail();
        position.x++;
    }
    void left()
    {
        updateTail();
        position.x--;
    }

    void updateTail()
    {
        unsigned short int i;
        for(i=length-1; i > 0; i--)
        {
            mytail[i] = mytail[i-1];
        }
        mytail[0].setPos(position);
    }
};
