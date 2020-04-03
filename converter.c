#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int con, exp, et, n,i,op1,op2,op;
	char numi[20], ci, cf;
	printf("From which format you want to convert ? \n");
	printf("1. Binary\n");
	printf("2. Octal\n");
	printf("3. Decimal\n");
	printf("4. Hexadecimal\n");
	scanf("%d", op1);
	
	printf("To which format you want to convert ? \n");
	printf("1. Binary\n");
	printf("2. Octal\n");
	printf("3. Decimal\n");
	printf("4. Hexadecimal\n");
	scanf("%d", op2);
	op=op2+10*op1;
	if(op==11 || op==22 || op==33 || op=44)
		printf("It is the same as you entered !");
	else
		switch(op)
		{
			case 13 :
			printf("Enter a number in Binary : \n");
			scanf("%s",numi);
			for(i=0; numi[i]!='\0'; ++i);
			for(n=0; n<=i-1; ++n)
			{
				ci=numi[i-n-1];
				(ci=="1")? et=1 : et=0;
				exp=pow(2,n);
		        con=con+et*exp;
			}
	}
			
	
	
	
	
	