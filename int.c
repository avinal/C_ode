#include<stdio.h>
int main()
{
	int i, a;
	printf("Enter smth:");
	scanf("%d", &a);
	for(i=1; i<=a; i++)	
		printf("%d", i);
	return 0;
}