#include <iostream>
#include <graphics.h>
#include <dos.h>
void boundary(int x, int y, int ncolor, int bcolor)
{
    if ((getpixel(x, y) != bcolor) && (getpixel(x, y) != ncolor))
    {
        delay(10);
        putpixel(x, y, ncolor);
        boundary(x + 1, y, ncolor, bcolor);
        boundary(x - 1, y, ncolor, bcolor);
        boundary(x, y + 1, ncolor, bcolor);
        boundary(x, y - 1, ncolor, bcolor);
        boundary(x + 1, y + 1, ncolor, bcolor);
        boundary(x + 1, y - 1, ncolor, bcolor);
        boundary(x - 1, y - 1, ncolor, bcolor);
        boundary(x - 1, y + 1, ncolor, bcolor);
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    rectangle(50, 50, 100, 100);
    boundary(55, 55, MAGENTA, WHITE);
    delay(5000);
    closegraph();
    return 0;
}