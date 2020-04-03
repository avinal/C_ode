#include<stdio.h>
int main()
{
	int i, initial=1, mid=1 , term, pri;
	printf("Enter the number of terms :\n");
	scanf("%d", &term);
	for(i=1; i<=term; ++i)
	{
		printf("\n%d" ,initial);
		pri=initial+mid;
		initial=mid;
		mid=pri;
	}
	return 0;
}