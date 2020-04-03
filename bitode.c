#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int bitode(char bi[10]);
int check(char bi[10]);
int main()
{
    int decimal;
    char bina[10];
    printf("Enter a binary number .\n");
    scanf("%s", bina);
    check(bina);
    decimal = bitode(bina);
    printf("The decimal equivalent of %s is %d.\n", bina, decimal);
    system("pause");
    return 0;
}
int bitode(char bi[10])
{
    int i, n, exp, de = 0, et;
    char ch;
    for (i = 0; bi[i] != '\0'; ++i)
        ;
    for (n = 0; n <= i - 1; ++n)
    {
        ch = bi[i - n - 1];
        if (ch == '1')
            et = 1;
        else
            et = 0;
        exp = pow(2, n);
        de = de + et * exp;
    }
    return (de);
}
int check(char bi[10])
{
    int length, check;
    for (length = 0; bi[length] != '\0'; ++length)
        ;
    for (check = 0; check <= (length - 1); check++)
    {
        if (bi[check] == '1' || bi[check] == '0')
        {
            continue;
        }
        else
        {
            printf("It is not a binary number.\n");
            exit(0);
        }
    }
    return 0;
}