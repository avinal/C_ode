/*

D:\C\bidefun.c
Avinal Kumar
November 2, 2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Determine type and interconverts binary, decimal and octal.*/

int bitode(char innum[10], int len);
long detobi(char innum[10]);
int detooc(int deci);
int bitooc(char innum[10], int len);

int main()
{
    char numb[10], bioc;
    long debi;
    int length, option, check, deoctal, bioctal, deoc, bide;

    printf("Enter a number :\n");
    scanf("%s", numb);

    for (length = 0; numb[length] != '\0'; ++length)
        ;
    for (check = 0; check <= (length - 1); check++)
    {
        if (numb[check] == '1' || numb[check] == '0')
        {
            continue;
        }
        else
        {
            printf("It seems to be a decimal , convert it to octal or binary.\n");
            printf("1. Octal\n");
            printf("2. Binary\n");
            scanf("%d", &option);
            switch (option)
            {
            case 1:
                sscanf(numb, "%d", &deoctal);
                deoc = detooc(deoctal);
                printf("The octal equivalent of %s is %d.\n", numb, deoc);
                break;

            case 2:
                debi = detobi(numb);
                printf("The binary equivalent of %s is %ld.\n", numb, debi);
                break;

            default:
                printf("Invalid input !!\n");
            }
            exit(0);
        }
    }
    printf("It seems to be a binary convert it to decimal or octal.\n");
    printf("1. Octal \n");
    printf("2. Decimal\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        bioc = bitooc(numb, length);
        printf("The octal equivalent of %s is %d.\n", numb, bioc);
        break;

    case 2:
        bide = bitode(numb, length);
        printf("The decimal equivalent of %s is %d.\n", numb, bide);
        break;

    default:
        printf("Invalid Input !! \n");
    }
    return 0;
}


/*
Binary to Decimal
innum[10]: input string
len: length of string
return: Decimal equivalent
*/
int bitode(char innum[10], int len)
{
    int count, base, expo, deci = 0;
    char ch;

    for (count = 0; count <= len - 1; ++count)
    {
        ch = innum[len - count - 1];
        if (ch == '1')
        {
            base = 1;
        }
        else
        {
            base = 0;
        }
        expo = pow(2, count);
        deci = deci + base * expo;
    }
    return (deci);
}

/*
Binary to Octal
innum[10]: input String
len: length of input
return: octal equivalent
*/
int bitooc(char innum[10], int len)
{
    int octal, decimal;
    decimal = bitode(innum, len);
    octal = detooc(decimal);
    return (octal);
}

/*
Decimal to Octal
deci: Decimal Number to be converted
return: octal equivalent
*/
int detooc(int deci)
{
    int remi, expo = 1, act, octa = 0;
    if (deci > 7)
    {
        while (deci > 7)
        {
            remi = deci % 8;
            octa = octa + remi * expo;
            expo = expo * 10;
            deci = deci / 8;
        }
        octa = octa + deci * expo;
    }
    else
    {
        octa = deci;
    }
    return (octa);
}

/*
Decimal to binary
innum: input string
return : binary number
*/
long detobi(char innum[10])
{
    int deci, remi, expo = 1;
    long bina = 0;
    sscanf(innum, "%d", &deci);
    while (deci > 0)
    {
        remi = deci % 2;
        bina = bina + remi * expo;
        expo = expo * 10;
        deci = deci / 2;
    }
    return (bina);
}
