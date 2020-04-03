#include <iostream>
#include <graphics.h>
#include <dos.h>
void flood(int x, int y, int fill, int old)
{
    if ((getpixel(x, y) != old) && (getpixel(x, y) != fill))
    {
        delay(10);
        putpixel(x, y, fill);
        flood(x + 1, y, fill, old);
        flood(x - 1, y, fill, old);
        flood(x, y + 1, fill, old);
        flood(x, y - 1, fill, old);
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    rectangle(10, 50, 50, 10);
    flood(15, 30, MAGENTA, WHITE);
    delay(5000);
    closegraph();
    return 0;
}