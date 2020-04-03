#include <stdio.h>
int main()
{
	int i, sum = 0, marks[6];
	float avg;
	for (i = 0; i <= 5; i++)
	{
		printf("Enter the marks in subjects %d:\n", i + 1);
		scanf("%d", &marks[i]);
	}
	for (i = 0; i < 6; i++)
	{
		printf("The marks in subject %d is %d\n", i, marks[i]);
		sum += marks[i];
	}
	avg = sum / 6;
	printf("The average of marks is %f :", avg);
	return 0;
}