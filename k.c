#include<stdio.h>
int main()
{
	int m[3][3], i, j, deter;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter a(%d%d) of matrix.", i+1, j+1);
			scanf("%d",&m[i][j]);
		}
	}

	deter=m[0][0]*m[1][1]*m[2][2]-m[0][0]*m[1][2]*m[2][1]-m[1][1]*m[0][2]*m[2][0]-m[2][2]*m[1][0]*m[0][1]+m[0][1]*m[1][2]*m[2][0]+m[0][2]*m[1][0]*m[2][1];
	printf("%d\n", deter);
	return 0;
}