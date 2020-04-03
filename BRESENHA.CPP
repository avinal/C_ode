#include <iostream.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>

int main()
{
int x1, y1, x2, y2;
cout<<"Enter starting and end co-ordinates" <<endl;
cin>>x1>>y1>>x2>>y2;
int dx=x2-x1, dy=y2-y1, di=2*dy-dx;
int length = abs(dx);
int x=x1, y=y1;
int gm=DETECT, gd;
initgraph(&gm,&gd, "C:\\TURBOC3\\BGI");
putpixel(x,y,RED);
while(--length)
{
if(di>=0)
{
x++;
y++;
di=di+2*(dy-dx);
putpixel(x,y,RED);
delay(5);
}
else
{
x++;
di=di + 2*dy;
putpixel(x,y,GREEN);
delay(5);
}
}
delay(5000);
return 0;
}