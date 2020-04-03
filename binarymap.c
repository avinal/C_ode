#include <stdio.h>

int binaryConvert(int);
int digits = 0;

int main(int argc, char const *argv[])
{
    int decimal, rem;
    printf("Enter a number\n");
    scanf("%d", &decimal);
    while (decimal > 0)
    {
        if (decimal >= 10)
        {
            rem = decimal % 10;
        }
        else
        {
            rem = decimal;
        }
        decimal /= 10;
        int binary = binaryConvert(rem);
        printf("%d\n", binary);
    }
    return 0;
}

int binaryConvert(int decimal)
{

    int rem, exp = 1;
    int bin = 0;
    while (decimal > 0)
    {
        rem = decimal % 2;
        bin = bin + rem * exp;
        exp = exp * 10;
        decimal = decimal / 2;
        digits++;
    }
    return bin;
}
