/*
D:\C\ds_array_64.c
Avinal Kumar
January 25, 2019
Array operations
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int size;
int array[100];
int sort(int element[], int);
int sort(int element[], int no_size)
{
    int exchange;
    for (int i = 0; i < no_size; i++)
    {
        for (int j = i + 1; j < no_size; j++)
        {
            if (element[i] > element[j])
            {
                exchange = element[i];
                element[i] = element[j];
                element[j] = exchange;
            }
        }
    }
    return 0;
}
int main()
{
    int choice;
    printf("#### Array Related Problems ####\n");
array_initialize:
{
    printf("Enter size of the array\n");
    scanf("%d", &size);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
}
menu:
{
    printf("\n");
    printf("1. Reenter the array .\n");
    printf("2. Traverse the array\n");
    printf("3. Manupulate the array\n");
    printf("4. Add elements at a specified position\n");
    printf("5. Even odd index sum\n");
    printf("6. Detete a particular element fro the array\n");
    printf("7. Find maximum and minimum value in the array\n");
    printf("8. Search for a data element\n");
    printf("9. Find the mean, median and mode of array elements\n");
    printf("10. Find weighted mean of array elements\n");
    printf("11. Find range of array elements\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        goto array_initialize;
        goto menu;
        break;
    case 2:
    {
        printf("You have entered the following elements\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }
        goto menu;
        break;
    }

    case 3:
    {
    sub_menu:
    {
        printf("1. Add the elements of the array\n");
        printf("2. Multiply the array elements\n");
        printf("3. Perform operation on each element\n");
        printf("4. Sum of particular elements\n");
        printf("5. Go back\n");
        int sub_choice;
        scanf("%d", &sub_choice);
        switch (sub_choice)
        {
        case 1:
        {
            int sum = 0;
            for (int i = 0; i < size; i++)
            {
                sum += array[i];
            }
            printf("The sum of the elements is %d.\n", sum);
            goto sub_menu;
            break;
        }
        case 2:
        {
            int product = 1;
            for (int i = 0; i < size; i++)
            {
                product *= array[i];
            }
            printf("The product of the elements is %d.\n", product);
            goto sub_menu;
            break;
        }
        case 3:
        {
            int per_choice, reverse = 0;
        per_menu:
        {
            printf("1. Add a number to every element\n");
            printf("2. Substract a number from every element\n");
            printf("3. Multiply every element with a number\n");
            printf("4. Divide every element with a number\n");
            printf("5. Square every element\n");
            printf("6. Reverse the operation\n");
            printf("7. Go back\n");
            printf("8. Goto Main Menu\n");
            scanf("%d", &per_choice);
            int number;

            switch (per_choice)
            {
            case 1:
                printf("Enter the number :\n");
                scanf("%d", &number);
                for (int i = 0; i < size; i++)
                {
                    printf("%d  ", array[i]);
                    array[i] += number;
                    printf("%d\n", array[i]);
                }
                reverse = 1;
                goto per_menu;
                break;
            case 2:
                printf("Enter the number :\n");
                scanf("%d", &number);
                for (int i = 0; i < size; i++)
                {
                    printf("%d  ", array[i]);
                    array[i] -= number;
                    printf("%d\n", array[i]);
                }
                reverse = 2;
                goto per_menu;
                break;
            case 3:
                printf("Enter the number :\n");
                scanf("%d", &number);
                for (int i = 0; i < size; i++)
                {
                    printf("%d  ", array[i]);
                    array[i] *= number;
                    printf("%d\n", array[i]);
                }
                reverse = 3;
                goto per_menu;
                break;
            case 4:
                printf("Enter the number :\n");
                scanf("%d", &number);
                for (int i = 0; i < size; i++)
                {
                    printf("%d  ", array[i]);
                    array[i] /= number;
                    printf("%d\n", array[i]);
                }
                reverse = 4;
                goto per_menu;
                break;
            case 5:
                for (int i = 0; i < size; i++)
                {
                    printf("%d  ", array[i]);
                    array[i] = pow(array[i], 2);
                    printf("%d\n", array[i]);
                }
                reverse = 5;
                goto per_menu;
                break;
            case 6:
                if (reverse == 1)
                {
                    for (int i = 0; i < size; i++)
                    {
                        array[i] -= number;
                    }
                    printf("Operation has been reversed !!\n");
                }
                else if (reverse == 2)
                {
                    for (int i = 0; i < size; i++)
                    {
                        array[i] += number;
                    }
                    printf("Operation has been reversed !!\n");
                }
                else if (reverse == 3)
                {
                    for (int i = 0; i < size; i++)
                    {
                        array[i] /= number;
                    }
                    printf("Operation has been reversed !!\n");
                }
                else if (reverse == 4)
                {
                    for (int i = 0; i < size; i++)
                    {
                        array[i] *= number;
                    }
                    printf("Operation has been reversed !!\n");
                }
                else if (reverse == 5)
                {
                    for (int i = 0; i < size; i++)
                    {
                        array[i] = pow(array[i], 1 / 2);
                    }
                    printf("Operation has been reversed !!\n");
                }
                else
                {
                    printf("You have not performed any operation yet !!\n");
                }
                goto per_menu;
                break;
            case 7:
                goto sub_menu;
                break;
            case 8:
                goto menu;
                break;
            default:
                printf("Wrong Choice !!!\n");
                goto per_menu;
                break;
            }
        }
            goto sub_menu;
            break;
        }
        case 4:
        {
            printf("For how many element you want the sum : ");
            int no_element, array_index, sum_no = 0;
            scanf("%d", &no_element);
            printf("Enter the position of the elements to be added\n");
            for (int i = 0; i < no_element; i++)
            {
                scanf("%d", &array_index);
                sum_no += array[array_index];
            }
            printf("The sum of the specified entered is %d.", sum_no);
            goto sub_menu;
            break;
        }
        case 5:
            goto menu;
            break;
        }
    }
    }
        goto menu;
        break;
    case 4:
    {
        printf("Enter the value and position of new element\n");
        int position, value;
        scanf("%d%d", &value, &position);
        for (int j = size; j >= position; j--)
        {
            array[j] = array[j - 1];
        }
        array[position - 1] = value;
        size++;
        goto menu;
        break;
    }
    case 5:
    {
        int even_sum = 0, odd_sum = 0;
        for (int j = 0; j < size; j++)
        {
            if (j % 2 == 0)
            {
                odd_sum += array[j];
            }
            else if (j % 2 == 1)
            {
                even_sum += array[j];
            }
        }
        printf("The sum of even indexes is %d and of odds is %d.\n", even_sum, odd_sum);
        break;
    }
    case 6:
    {
        printf("Enter the position of the element to be deteted \n");
        int position;
        scanf("%d", &position);
        for (int i = position - 1; i < size; i++)
        {
            array[i] = array[i + 1];
        }
        size--;
        goto menu;
        break;
    }
    case 7:
    {
        int max, min;
        sort(array, size);
        max = array[size - 1];
        min = array[0];
        printf("The maximum and minimum values in the array are %d and %d respectively.\n", max, min);
        goto menu;
        break;
    }
    case 8:
    {

        break;
    }
    }
}
    return 0;
}