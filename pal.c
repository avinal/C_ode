#include<stdio.h>
#include<stdlib.h>
int main()
{
	int pal, len, div;
	printf("Enter an integer :");
	scanf("%d", pal);
	len=strlen(pal);
	for(i=1, i<=len, i++)
		div=pal/pow(10,i);
	
	if()
		printf("%s is a palindrom", pal);
	else
		printf("%s is not a palindrom", pal);
	return 0;
}