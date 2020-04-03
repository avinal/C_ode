#include<stdio.h>
int main()
{
	int A[3][3], B[3][3],S[3][3],i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter elements of matrix A :");
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter elements of matrix B :");
			scanf("%d",&B[i][j]);
		}
		
	}
	
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			S[i][j]=A[i][j]+B[i][j];
			printf("\t %d",S[i][j]);
			printf("\n");
		}
	}
	return 0;
}
		
		