#include <stdio.h>
#include <stdlib.h>
int main()
{
	char pal[20];
	int i, n;
	printf("Enter something to check palindrome :");
	scanf("%s", pal);
	for (i = 0; pal[i] != '\0'; ++i)
		;

	for (n = 0; n <= i - 1; ++n)
	{
		if (pal[n] == pal[i - n - 1])
		{
			continue;
		}
		else
		{
			printf("'%s' is not a palindrome.\n", pal);
			exit(0);
		}
	}
	printf("'%s' is a palindrome.\n", pal);
	return 0;
}