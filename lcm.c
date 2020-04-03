#include<stdio.h>
/* Took a little more than 3 hrs and 30 min. */
int main()
{
	int fst, sec, l, n, p ,lcm=1;
	int prime[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	printf("Enter first number :");
	scanf("%d", &fst);
	printf("Enter second number :");
	scanf("%d", &sec);
	
	fst>sec? l=sec : l=sec;
	for(n=0; n<=24; n++)
	{
		p=prime[n];
		if(p<=l)
		{
			if(fst%p==0 && sec%p==0)
				{
					lcm=lcm*p;
                    fst=fst/p;
		            sec=sec/p;	
				}
				else
				{
					continue;
				}	
		}
		else 
		{
			break;
		}
	}
	printf("LCM of %d and %d is %d .", fst, sec, lcm*fst*sec);
	printf("\n");
	return 0;
}
	