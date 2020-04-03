#include <iostream.h>
#include <graphics.h>
#include <dos.h>

const int INSIDE=0, LEFT=1, RIGHT=2, BOTTOM=4, TOP=8;
int xmin, ymin, xmax, ymax;

int findCode(double x, double y)
{
int code;
code=INSIDE;
if(x<xmin)
{
code|=LEFT;
}
else if(x>xmax)
{
code|=RIGHT;
}

if(y<ymin)
{
code|=BOTTOM;
}
else if(y>ymax)
{
code|=TOP;
}
return 0;
}

void CohenSutherland(double x0, double y0, double x1,double y1)
{
int wi=findCode(x0, y0);
int wj=findCode(x1, y1);

int accept=0;
while(1)
{
if(!(wi|wj)){
accept=1;
break;
}
else if(wi&wj){
break;
}
else{
double x,y;
int OUT=(wi?wi:wj);
if(OUT&TOP){
x=x0+(x1-x0)*(ymax-y0)/(y1-y0);
y=ymax;
}
else if(OUT & BOTTOM){
x=x0+(x1-x0)*(ymin-y0)/(y1-y0);
y=ymin;
}
else if(OUT & RIGHT){
y=y0 + (y1-y0)*(xmax-x0)/(x1-x0);
x=xmin;
}
else if(OUT & LEFT){
y=y0 + (y1-y0)*(xmin-x0)/(x1-x0);
x=xmin;
}
if(OUT == wi){
x0=x;
y0=y;
wi=findCode(x0,y0);
}
else{
x1=x;
y1=y;
wi=findCode(x1, y1);
}
}
if(accept){
rectangle(getmaxx()/2+xmin, getmaxx()/2-ymin, getmaxx()/2+xmax,getmaxx()/2-ymax);
line(getmaxx()/2+x0,getmaxx()/2-y0,getmaxx()/2+x1, getmaxx()/2-y1);
}}}

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
float x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
cin>>xmin>>ymin>>xmax>>ymax;
CohenSutherland(x1,y1,x2,y2);
delay(1000);
return 0;
}
