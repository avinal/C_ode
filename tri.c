#include<stdio.h>
int main()
{
	int ro, i, j, p, q;
	printf("Enter the number of terms :");
	scanf("%d", &ro);
	for(i=0; i<=ro; i++)
	{
		p=i*(i+1)/2;
		q=(i+1)*(i+2)/2 -1;
		for(j=p; j<=q; j++)
		{
			printf("  %d", j);
		}
		printf("\n");
	}
	return 0;
}