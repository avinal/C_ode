//Digital Differential Analyser Algorithm

#include <iostream>
#include <GL/gl.h>
#include <GL/glu.h>
#include <windows.h>
#include <cstdlib>

struct point
{
    float X;
    float Y;
};

int main()
{
    point start, end;
    std::cout << "Input start and end cordinates of the line" << std::endl;
    std::cin >> start.X >> start.Y >> end.X >> end.Y;

    point delta;
    delta.X = end.X - start.X;
    delta.Y = end.Y - start.Y;

    int length = (delta.X > delta.Y ? delta.X : delta.Y);
    delta.X /= length;
    delta.Y /= length;

    point pixelstart;
    pixelstart.Y = 0.5;
    pixelstart.X = 0.5;

    while(length--){
        
    }

    return 0;
}