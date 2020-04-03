#include<stdio.h>
long power(int , int);
int main()
{
	int base, po;
	long int resu;
	printf("Enter a number and its power.");
	scanf("%d%d",&base, &po);
	resu=power(base, po);
	printf("%ld\n", resu);
}
long power(int base, int po)
{
	int count;
	long int resu=1;
	do
	{
		resu=resu*base;
		count++;
	}
	while(count<po);
	return(resu);
}