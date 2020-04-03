#include<stdio.h>
#include<stdlib.h>

int main()
{
    int deci, remi, expo=1; 
    char innum[10];
	long bina=0;
    printf("Enter a decimal number.");
    scanf("%s", innum);
    sscanf(innum,"%d",&deci);
	while(deci>0)
	{
		remi=deci%2;
		bina=bina+remi*expo;
		expo=expo*10;
		deci=deci/2;
	}
    printf("The binary of %s is %ld", innum, bina);
	return 0;
}