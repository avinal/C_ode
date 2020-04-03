#include <iostream>
#include <graphics.h>
#include <dos.h>
int main()
{
    int gd = DETECT, gm, xc, yc, r, pk;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    std::cout << "Enter centre coordinates of circle and radius" << std::endl;
    std::cin >> xc >> yc >> r;
    int x = 0, y = r;
    putpixel(xc + x, yc - y, 1);
    pk = 3 - 2 * r;
    for (int x = 0; x <= y; x++)
    {
        if (pk < 0)
        {
            pk += 4 * x + 6;
        }
        else
        {
            y -= 1;
            pk += 4 * (x - y) + 6;
        }
        putpixel(xc + x, yc - y, 7);
        putpixel(xc - x, yc - y, 7);
        putpixel(xc + x, yc + y, 7);
        putpixel(xc - x, yc + y, 7);
        putpixel(xc + y, yc - x, 7);
        putpixel(xc - y, yc - x, 7);
        putpixel(xc + y, yc + x, 7);
        putpixel(xc - y, yc + x, 7);
        delay(100);
    }
    return 0;
}