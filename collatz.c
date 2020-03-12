/*
D:\C\collatz.c
Avinal Kumar
December 13, 2018
The Collatz conjecture is a conjecture in mathematics that concerns a sequence defined as 
follows: start with any positive integer n. Then each term is obtained from the previous 
term as follows: if the previous term is even, the next term is one half of the previous 
term. If the previous term is odd, the next term is 3 times the previous term plus 1. 
The conjecture is that no matter what value of n, the sequence will always reach 1.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int natura, i = 1;
	printf("Enter a natural number :");
	scanf("%d", &natura);
	do
	{
		if (natura % 2 == 0)
		{
			printf("%d\n", natura);
			natura /= 2;
		}
		else
		{
			printf("%d\n", natura);
			natura = (3 * natura + 1) / 2;
		}
		i++;
		if (natura == 1)
		{
			printf("1\n");
			printf("The number of terms is %d .\n", i);
			exit(0);
		}
		else
		{
			continue;
		}
	} while (natura != 1);
	return 0;
}
