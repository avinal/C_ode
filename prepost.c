#include<stdio.h>
int main()
{
	int a=47, B=0;
	a--;
	printf("%d\n",a);
	B=a--;
	printf("%d\n", B);
	printf("%d\n", a);
	return 0;
}