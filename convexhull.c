/*
D:\C\convexhull.c
Avinal Kumar
January 1, 2019
Implementation of Convex Hull Algorithm.
*/
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

/*
Point struct having x and y values.
Forms a Linked List of cordinates.
*/
struct node
{
    int abscissa, ordinate;
    struct node *next;
};
typedef struct node point;

point *y_start = NULL;
point *x_start = NULL;
point *con_start = NULL;
point *temp = NULL;
point *plane(point *);
point *display(point *);
point *sort(point *, int);
point *add_point(point *, int, int);
point *convex(point *, point *);
point *last(point *);

int main(int argc, char const *argv[])
{
    int option;
    printf("\n####Convex Hull####");
    do
    {
        printf("\n1. Enter the points");
        printf("\n2. Display the number of Convex Hull points");
        printf("\n3. Display Convex Hull points");
        printf("\n4. EXIT\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            x_start = plane(x_start);
            x_start = sort(x_start, 1);
            point *var_point;
            var_point = x_start;
            while (var_point != NULL)
            {
                y_start = add_point(y_start, (*var_point).abscissa, (*var_point).ordinate);
                var_point = (*var_point).next;
            }
            printf("\nRecorded points in order of abscissa are :");
            display(x_start);
            y_start = sort(y_start, 0);
            printf("\nRecorded points in order of ordinate are :");
            display(y_start);
            con_start = convex(x_start, y_start);
            printf("\n");
            display(con_start);
            break;
        case 2:
            printf("\nThe number of Convex Hull points are %d.");
            break;
        case 3:
            printf("\nThe Convex Hull Points are :");
            display(con_start);
            break;
        default:
            break;
        }

    } while (option != 4);
    return 0;
}

/*
Last cordinates entered
*first: pointer to the linked list
return: the last point
*/
point *last(point *first)
{
    point *var_point;
    var_point = first;
    while ((*var_point).next != NULL)
    {
        var_point = (*var_point).next;
    }
    return (var_point);
}

/*
Creates a plane
*first: pointer to the linked list
*/
point *plane(point *first)
{
    point *new_point, *var_point;
    int co_x, co_y;
    printf("\nEnter -1 -1 to end");
    printf("\nEnter the co-ordinates ");
    scanf("%d%d", &co_x, &co_y);
    while (co_x != -1 || co_y != -1)
    {
        new_point = (point *)malloc(sizeof(point));
        (*new_point).abscissa = co_x;
        (*new_point).ordinate = co_y;
        (*new_point).next = NULL;
        if (first == NULL)
        {
            first = new_point;
        }
        else
        {
            var_point = first;
            var_point = last(var_point);
            (*var_point).next = new_point;
        }
        printf("\nEnter the co-ordinates ");
        scanf("%d%d", &co_x, &co_y);
    }
    return (first);
}

/*
Displays the linked list
*/
point *display(point *first)
{
    point *var_point;
    var_point = first;
    while (var_point != NULL)
    {
        printf("\n(%d,%d)", (*var_point).abscissa, (*var_point).ordinate);
        var_point = (*var_point).next;
    }
    return (first);
}

/*
Add Points to the plane
*/
point *add_point(point *first, int x, int y)
{
    point *new_point, *var_point;
    new_point = (point *)malloc(sizeof(point));
    (*new_point).abscissa = x;
    (*new_point).ordinate = y;
    (*new_point).next = NULL;
    if (first == NULL)
    {
        first = new_point;
    }
    else
    {
        var_point = first;
        var_point = last(var_point);
        (*var_point).next = new_point;
    }
    return (first);
}

/*
Sorts the point in order of absicca and ordinates
*/
point *sort(point *first, int order)
{
    point *var_point1, *var_point2;
    int temp_x, temp_y;
    var_point1 = first;
    while (var_point1 != NULL)
    {
        var_point2 = (*var_point1).next;
        while (var_point2 != NULL)
        {
            if (order == 1)
            {
                if ((*var_point1).abscissa < (*var_point2).abscissa)
                {
                    temp_x = (*var_point1).abscissa;
                    temp_y = (*var_point1).ordinate;
                    (*var_point1).abscissa = (*var_point2).abscissa;
                    (*var_point1).ordinate = (*var_point2).ordinate;
                    (*var_point2).abscissa = temp_x;
                    (*var_point2).ordinate = temp_y;
                }
            }
            else if (order == 0)
            {
                if ((*var_point1).ordinate < (*var_point2).ordinate)
                {
                    temp_x = (*var_point1).abscissa;
                    temp_y = (*var_point1).ordinate;
                    (*var_point1).abscissa = (*var_point2).abscissa;
                    (*var_point1).ordinate = (*var_point2).ordinate;
                    (*var_point2).abscissa = temp_x;
                    (*var_point2).ordinate = temp_y;
                }
            }
            var_point2 = (*var_point2).next;
        }
        var_point1 = (*var_point1).next;
    }
    return (first);
}

/*
Convex Hull Algorithm
*/
point *convex(point *first_x, point *first_y)
{
    int mid_x = 0, mid_y = 0;
    point *var_point;
    con_start = add_point(con_start, (*first_x).abscissa, (*first_x).ordinate);
    mid_x += (*first_x).abscissa;
    mid_y += (*first_x).ordinate;
    con_start = add_point(con_start, (*first_y).abscissa, (*first_y).ordinate);
    mid_x += (*first_y).abscissa;
    mid_y += (*first_y).ordinate;
    var_point = last(first_x);
    mid_x += (*var_point).abscissa;
    mid_y += (*var_point).ordinate;
    con_start = add_point(con_start, (*var_point).abscissa, (*var_point).ordinate);
    var_point = last(first_y);
    mid_x += (*var_point).abscissa;
    mid_y += (*var_point).ordinate;
    con_start = add_point(con_start, (*var_point).abscissa, (*var_point).ordinate);
    mid_x /= 4;
    mid_y /= 4;

    return (con_start);
}
