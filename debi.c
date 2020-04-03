#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	char bin[20], ch;
	int dec=0 , exp, i, n, et;
	printf("Enter a number in binary :");
	scanf("%s",bin);
	for(i=0; bin[i]!='\0'; ++i);
	for(n=0; n<=i-1; ++n)
	{
		ch=bin[i-n-1];
		ch=='1'? et=1 : et=0;
		exp=pow(2,n);
		dec=dec+et*exp;
	}
	printf("The decimal of %s is %d.\n",bin,dec);
	return 0;
}