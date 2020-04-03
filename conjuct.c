#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, num, odd, even ;
	printf("Enter a natural number :");
	scanf("%d", &num);
	if(num%2==0)
		goto evope;
	else
		goto odope;

	odope :
	num=(3*num+1)/2;
	printf("%d", num);
	if(num%2==0 && num!=1)
		goto evope;
	else
		goto odope;
	
	evope :
	num=num/2;
	printf("%d", num);
	if(num%2==0 && num!=1)
		goto evope;
	else
		goto odope;
	
	return 0;
}
	