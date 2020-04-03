#include <stdio.h>
int main()
{
	char *fsna, *sena, *tona;
	printf("Enter your first name :");
	scanf("%s", fsna);
	printf("Enter your last name :");
	scanf("%s", sena);
	*tona = *fsna + *sena;
	printf("%s", tona);
	return 0;
}
