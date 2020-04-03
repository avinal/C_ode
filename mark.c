#include<stdio.h>
void body();
int main()
{
	int marks;
	printf("Enter your marks out of 100 :");
	scanf("%d", &marks);
	if(marks>80)
		printf("\nvery good");
	else
		body();
	return 0;
}

void body()
{
	printf("\nYou are a fool");
}
