#include<stdio.h>
int main()
{
	char *pal ;
	int num , out;
	printf("Enter any integer : ");
	scanf("%s", pal);
	sscanf(pal, "%d", &num);
	out=num+2;
	printf("%d", out);
	return 0;
}
	
	