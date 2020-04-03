#include <iostream.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>

int main()
{
int gd= DETECT, gm;
int x1,y1,x2,y2;
cout<<"Enter the starting and end co-ordinates"<<endl;
cin>>x1>>y1>>x2>>y2;
float dx = x2-x1;
float dy = y2-y1;
int length = (abs(dx) >=abs(dy)? abs(dx) : abs(dy));
dx /= length;
dy /= length;
float x = x1+0.5, y=y1+0.5;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
while(--length)
{
putpixel(floor(x), floor(y), RED);
x+=dx;
y+=dy;
delay(5);
}
delay(500);
return 0;
}