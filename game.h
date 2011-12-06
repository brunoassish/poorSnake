#pragma once

#include "snake_.h"
#include "screen.h"
#include "food.h"
#include <cstdlib>
//#include <windows.h>
#include <ctime>

class Game
{
    private:
        Snake player;
        Food targets[10];
        Screen SCR;
    public:
        Game()
        {
            int i;// j;
            setScreen(0);
            SCR.PrintScreen();
            Sleep(2000);
            for (i = 0; i < 10; i++)
            {
                Sleep(200);
                if (system("CLS"))
                    {system("clear");}
                setScreen(i);
                SCR.screen[i][i] = true;
                player.up();
                player.right();
                player.Ate();
                SCR.PrintScreen();}

        }
        ~Game() {}

        void moveSnake(char C)
        {
            switch (C)
            {
                case 'w':
                    { player.up();    break; }
                case 's':
                    { player.down();  break; }
                case 'd':
                    { player.right(); break; }
                case 'a':
                    { player.left();  break; }
                default:
                    break;
            }
        }

        void setScreen(int i)
        {
            SCR.erase();
            player.print(SCR);
            targets[i].print(SCR);
        }
        void Sleep (unsigned long int milisec)
        {
            clock_t endwait;
            endwait = clock () + ((milisec * CLOCKS_PER_SEC)/1000) ;
            while (clock() < endwait) {}
        }
};
