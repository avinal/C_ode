#include <iostream>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
int main()
{
    int x1, x2, y1, y2;
    std::cout << "Enter starting and end co-ordinates" << std::endl;
    std::cin >> x1 >> y1 >> x2 >> y2;
    int dx = x2 - x1, dy = y2 - y1, di = 2 * dy - dx;
    int length = abs(dx);
    int x = x1, y = y1;
    putpixel(x, y, MAGENTA);
    while (--length)
    {
        if (di >= 0)
        {
            x++;
            y++;
            di += 2 * (dy - dx);
            putpixel(x, y, GREEN);
        }
        else
        {
            x++;
            di += 2 * dy;
            putpixel(x, y, MAGENTA);

            delay(5);
        }
    }
    delay(50000);
    return 0;
}