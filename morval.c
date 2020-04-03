#include<stdio.h>
#include<math.h>
#define PI 3.14

int measure(int r , float *, float *, float *);
int main()
{
    int radius;
    float are, vol, peri;
    printf("Enter radius of sphere .\n");
    scanf("%d", &radius);
    measure(radius, &are, &vol, &peri);
    printf("Surface Area of sphere = %f\n",are );
    printf("Volume of sphere = %f\n", vol);
    printf("Perimeter of sphere = %f\n", peri);
}
int measure(int r, float *a, float *v, float *p)
{
    *a=4*PI*pow(r,2);
    *v=4*PI*pow(r, 3)/3;
    *p=2*PI*r;
}