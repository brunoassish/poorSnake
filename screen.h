#pragma once

class Screen
{
    public:
        bool screen[50][50];
        void PrintScreen()
        {
            printf("Welcome to the poorSnake 0.0.1!\tI hope you enjoy this lame game...\n");
            unsigned short int i, j;
            for (i = 0; i < 52; i++)
                printf("#");
            printf("\n");
            for (i = 0; i < 50; i++)
            {
                printf("#");
                for (j = 0; j < 50; j++)
                {
                    if (screen[i][j])
                        printf("*");
                    else
                        printf(" ");
                }
                printf("#\n");
            }
            for (i = 0; i < 52; i++)
                printf("#");
            printf("\nCopyrights... fuck this shit\n");
        }
        void erase()
        {
            unsigned short int i, j;
            for (i = 0; i < 50; i++)
            {
                for (j = 0; j < 50; j++)
                { screen[i][j] = false; }
            }
        }
};
