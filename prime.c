#include<stdio.h>
#include<math.h>
int main()
{
	int p,i, f, j;
	scanf("%d",&p);
	for(j=1; j<=p;j++)
	{
		f=0;
		for(i=1; i<=j; i++)
		{
			if(j%i==0)
			{
				f++;
			}
			else
			{
				continue;
			}
		}
		if(f==2)
		{
			printf("%d ", j);
		}
		else
		{
			continue;
		}
	}
	return 0;
}
	