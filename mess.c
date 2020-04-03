#include<stdio.h>
#include<math.h>
#define VO
int main()
{
float a,b,c;
printf("Enter the dimensions:");
printf("Radius:");
scanf("%f",&b);
printf("Height:");
scanf("%f",&c);
a =  (3.14*pow(b,2)*c);
printf("%f",a);
return 0;
}