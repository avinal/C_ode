#include <stdio.h>
#include <malloc.h>
struct student
{
    int roll_no;
    struct student *next;
};
typedef struct student roll;
struct ponisection
{
    int sum;
    roll *first;
};
typedef struct ponisection section;
roll *insert(roll *, int);
int display(section);
int main(int argc, char const *argv[])
{
    int test;
    scanf("%d", &test);
    section iiit[3];

    while (test--)
    {
        iiit[0].sum = 0;
        iiit[1].sum = 0;
        iiit[2].sum = 0;
        iiit[0].first = NULL;
        iiit[1].first = NULL;
        iiit[2].first = NULL;
        int num_student, rollnum;
        scanf("%d", &num_student);
        while (num_student--)
        {
            scanf("%d", &rollnum);
            if (iiit[0].sum <= iiit[1].sum && iiit[0].sum <= iiit[2].sum)
            {
                iiit[0].first = insert(iiit[0].first, rollnum);
                iiit[0].sum += rollnum;
            }
            else if (iiit[1].sum <= iiit[0].sum && iiit[1].sum <= iiit[2].sum)
            {
                iiit[1].first = insert(iiit[1].first, rollnum);
                iiit[1].sum += rollnum;
            }
            else if (iiit[2].sum <= iiit[1].sum && iiit[2].sum <= iiit[0].sum)
            {
                iiit[2].first = insert(iiit[2].first, rollnum);
                iiit[2].sum += rollnum;
            }
        }
        for (int j = 0; j < 3; j++)
        {
            display(iiit[j]);
        }
    }
    return 0;
}

roll *insert(roll *first, int data)
{
    roll *newroll, *varroll;
    newroll = (roll *)malloc(sizeof(roll));
    newroll->roll_no = data;
    if (first == NULL)
    {
        first = newroll;
        newroll->next = NULL;
    }
    else
    {
        varroll = first;
        while (varroll->next != NULL)
        {
            varroll = varroll->next;
        }
        varroll->next = newroll;
        newroll->next = NULL;
    }
    return (first);
}

int display(section first)
{
    roll *var = first.first;
    while (var != NULL)
    {
        printf("%d ", var->roll_no);
        var = var->next;
    }
    printf("\n");
    return 0;
}
