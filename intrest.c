#include<stdio.h>
#define IN(p,r,t) (p*r*t/100)
int main()
{
	float p1, r1, t1, i, ta;
	printf("Enter principal amount:");
	scanf("%f", &p1);
	printf("Enter rate of intrest:");
	scanf("%f", &r1);
	printf("Enter time:");
	scanf("%f", &t1);
	i=IN(p1,r1,t1);
	ta=p1+i;
	printf("interst : %f",i);
	printf("Available Amt. : %f",ta);
	return 0;
}
	
	
	
	
	