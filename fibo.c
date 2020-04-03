#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n, st=0, k, p=1, t;
	printf("Enter number of terms of Fibonacci sequence:");
	scanf("%lld", &n);
	for(k=0; k<=n; k++)
	{
	printf("\n %lld",st);
	t=st+p;
	st=p;
	p=t;
	}
	
	
	return 0;
}
	