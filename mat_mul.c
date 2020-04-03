#include<stdio.h>
#include<stdlib.h>
int inmat(int ord);
int malmat(int A[10][10], int B[10][10] );
int main()
{
	int matA[10][10], matB[10][10], matM[10][10];
	int or_A, or_B, or_C, i, j, n ;
	
	printf("Enter the order of first matrix :\n");
	scanf("%d%c", &or_A);
	printf("Enter the number of columns of first matrix :\n");
	scanf("%d", &or_B);
	printf("Enter the number of columns of second matrix :\n");
	scanf("%d", &or_C);
}
int inmat(int )
{
	for(int i=0; i<or_A; i++)
	{
		for(j=0; j<or_B; j++)
		{
			printf("Enter element A(%d%d) of matrix A :", i+1, j+1);
			scanf("%d",&matA[i][j]);
		}
	}
	
	for(i=0; i<or_B; i++)
	{
		for(j=0; j<or_C; j++)
		{
			printf("Enter element B(%d%d) of matrix B :",i+1,j+1);
			scanf("%d",&matB[i][j]);
		}
	}
}
int malmat(int A[10][10], int B[10][10])
int matM;
	for(int i=0; i<or_A; i++)
	{
		for(int j=0; j<or_C; j++)
		{
			matM[i][j]=0;
			for(int n=0; n<or_B; n++)
			{
				matM[i][j] = matM[i][j] + matA[i][n] * matB[n][j];
			}
			printf("");
			printf("\n");
		}
	}
	return 0;
}
	