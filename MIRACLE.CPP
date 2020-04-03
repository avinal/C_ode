#include <iostream.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>

void flood(int x, int y, int fill, int old)
{
if((getpixel(x,y)!=old) && (getpixel(x,y)!=fill))
{
delay(10);
putpixel(x,y,fill);
flood(x+1,y,fill,old);
flood(x-1,y,fill,old);
flood(x,y+1, fill, old);
flood(x,y-1,fill,old);
}}

void drawCircle(int x1, int y1, int radius)
{
int x=radius, y=0, err=0;
while(x>=y)
{
putpixel(x1+x, y1+y, BLUE);
putpixel(x1+y, y1+x, RED);
putpixel(x1-y, y1+x, GREEN);
putpixel(x1-x, y1+y, CYAN);
putpixel(x1-x, y1-y, WHITE);
putpixel(x1-y, y1-x, LIGHTGREEN);
putpixel(x1+y, y1-x, MAGENTA);
putpixel(x1+x,y1-y, YELLOW);
if(err<=0)
{
y++;
err+=2*y+1;
}
else
{
x--;
err-=2*x+1;
}
delay(20);
}
}
int main()
{
int gd=DETECT, gm, x,y,r;
cout<<"Enter coordinates and radius of the circle"<<endl;
cin>>x>>y>>r;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
drawCircle(x,y,r);
flood(x,y,RED,WHITE);
delay(5000);
return 0;
}