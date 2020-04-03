#include<stdio.h>
#include<stdlib.h>
int main()
{
	int st_marks[10][5],i,j;
	printf("Enter marks in the order of roll number :");
	for(i=0; i<10; i++)
	{
		for(j=0; j<5; j++)
			st_marks[i][j]=rand(10);
	}
	for(i=0; i<10; i++)
	{
		for(j=0; j<5; j++)
			printf("\t %d",st_marks[i][j]);
		printf("\n");
		
	}
	return 0;
}

	