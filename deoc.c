#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  deci, remi, expo=1,act, octa=0 ;
    printf("Enter a decimal number.\n");
    scanf("%d", &deci);
    act=deci;
    if(deci>7)
	{
        while(deci>7)
        {
            remi=deci%8;
            octa=octa+remi*expo;
            expo=expo*10;
            deci=deci/8;
        }
        octa=octa+deci*expo;
    }
    else
    octa=deci;
    printf("The octal of %d is %d.\n",act,octa );
	return 0;
}