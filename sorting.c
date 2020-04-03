#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int size;
	printf("Enter the number of elements,\n");
	scanf("%d", &size);
	char number[size][10], temp[10];
	printf("Enter the numbers or names.\n");
	for(int i=0; i<size; i++)
	{
		scanf("%s", number[i]);
	}
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size-i-1; j++)
		{
			if(strcmp(number[j],number[j+1])>0)
			{
				strcpy(temp, number[j]);
				strcpy(number[j],number[j+1]);
				strcpy(number[j+1], temp);
			}
		}
	}
	printf("Sorted numbers are :\n");
	for(int i=0; i<size; i++)
	{
		printf("%s\n", number[i]);
	}
	return 0;
}