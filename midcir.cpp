#include <iostream>
#include <graphics.h>]
#include <dos.h>
void drawCircle(int x0, int y0, int radius)
{
    int x = radius, y = 0, err = 0;
    while (x >= y)
    {
        putpixel(x0 + x, y0 + y, 7);
        putpixel(x0 + y, y0 + x, 7);
        putpixel(x0 - y, y0 + x, 7);
        putpixel(x0 - x, y0 + y, 7);
        putpixel(x0 - x, y0 - y, 7);
        putpixel(x0 - y, y0 - x, 7);
        putpixel(x0 + y, y0 - x, 7);
        putpixel(x0 + x, y0 - y, 7);
        if (err <= 0)
        {
            y += 1;
            err += 2 * y + 1;
        }
        else
        {
            x -= 1;
            err -= 2 * x + 1;
        }
    }
}
int main()
{
    int gd = DETECT, gm, error, x, y, r;
    std::cout << "Enter radius of the circle" << std::endl;
    std::cin >> r;
    std::cout << "Enter x and y co-ordinates" << std::endl;
    std::cin >> x >> y;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    drawCircle(x, y, r);
    delay(5000);
    closegraph();
    return 0;
}