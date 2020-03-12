/*
D:\C\coordi.c
Avinal Kumar
November 8, 2018
Finds the final point after unit perpendicular moves
*/
#include <string.h>
#include <stdio.h>
int main()
{
    char move[20];
    int x = 0, y = 0, step, i;
    scanf("%s", move);
    step = strlen(move);
    for (i = 0; i <= step; i++)
    {
        if (move[i] == 'U' || move[i] == 'u')
        {
            y++;
        }
        else if (move[i] == 'D' || move[i] == 'd')
        {
            y--;
        }
        else if (move[i] == 'R' || move[i] == 'r')
        {
            x++;
        }
        else if (move[i] == 'L' || move[i] == 'l')
        {
            x--;
        }
    }
    printf("(%d, %d)", x, y);

    return 0;
}
