#pragma once

//#include "snake_.h"
#include "screen.h"
#include "food.h"
#include "direction.h"
#include <cstdlib>


class Game
{
    private:
        //Snake player;
        Food targets[10];
        Screen SCR;
    public:
        Game()
        {
            int i;// j;
            //newD << UP;
            setScreen(0);
            SCR.PrintScreen();
            Sleep(2000);
            for (i = 0; i < 30; i++)
            {Sleep(200);
            if (system("CLS")) system("clear");
            if (i<10)
                {setScreen(i);}
            SCR.screen[i][i] = true;
            SCR.PrintScreen();}

        }
        ~Game() {}

        /*void moveSnake()
        {
            Direction newD(true, false);
            Direction lastD(false, false);
            if (newD.getA()!=lastD.getA())
            {
                if ((newD.getA()))
                {
                    if(newD.getB())
                    { player.up();    }
                    else
                    { player.down();  }
                }
                else
                {
                    if(newD.getB())
                    { player.right(); }
                    else
                    { player.left();  }
                }
            lastD<<newD;
            }
        }*/
        void setScreen(int i)
        {
            SCR.erase();
            //player.print(SCR);
            targets[i].print(SCR);
        }


};
