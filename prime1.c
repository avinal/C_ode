#include<stdio.h>
int main()
{
	int term, i=0,  n, p, prime=0;
	printf("Enter number of prime terms :");
	scanf("%d", &term);
	for(n=1; n<=1000; n++)
	{
		for(p=1; p<=n; p++)
		{
			if(n%p==0)
			{
				i++;
			}
			else
				continue;
		}
		if(i==2)
		{
			prime++;
			printf("%d\n", n);
			if(prime==term)
			{
				break;
			}
		}
	}
	return 0;
}