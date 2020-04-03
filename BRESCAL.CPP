#include <iostream.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>

int main()
{
int gd=DETECT, gm,xc, yc,r, pk;
cout<<"Enter center coordinates and radius"<<endl;
cin>>xc>>yc>>r;
int x=0, y=r;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
putpixel(xc+x, yc-y, 1);
pk= 3- 2*r;
for(x=0; x<=y;  x++)
{
if(pk<0)
{
pk+=4*x +6;
}
else {
y-=1;
pk+=4*(x-y)+6;
}
putpixel(xc+x, yc-y,RED);
putpixel(xc-x, yc-y, GREEN);
putpixel(xc+x,yc+y,MAGENTA);
putpixel(xc-x, yc+y,CYAN);
putpixel(xc+y, yc-x,RED);
putpixel(xc-y,yc-x,GREEN);
putpixel(xc+y,yc+x, MAGENTA);
putpixel(xc-y,yc+x,CYAN);
delay (20);
}
delay(10000);
return 0;
}