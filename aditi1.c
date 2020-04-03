#include<stdio.h>
int main()
{
	int i,j;
	char alp;
	printf("Enter no.");
	scanf("%c", &alp);
	
	char stp=alp;

	for(i=1; i<=stp; i++)
	{
		for(j=1; j<=i; j++)
	    {
			printf("%c",alp);
		}
		alp++;
		printf("\n");
	}
	return 0;
}