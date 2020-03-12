/*
D:\C\dnamrna.c
Avinal Kumar
January 30, 2019
DNA RNA strand creating simulation
*/

#include <stdio.h>
#include <malloc.h>
enum dna_base
{
    A,
    T,
    G,
    C
};
struct node
{
    enum dna_base base1;
    enum dna_base base2;
    struct node *next;
    struct node *prev;
};
typedef struct node nucleotide;
nucleotide *start = NULL;
nucleotide *polymerisation(nucleotide *);
nucleotide *add_nucleotide(nucleotide *);
nucleotide *display(nucleotide *);

int main(int argc, char const *argv[])
{
    int option;
    printf("#### DNA ####\n");
    printf("1. Enter one strand of DNA\n");
    printf("2. Add new nucleotide\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        start = polymerisation(start);
        break;
    case 2:
        display(start);
        break;
    default:
        break;
    }
    return 0;
}

nucleotide *polymerisation(nucleotide *first)
{
    nucleotide *new_nucleotide, *var_nucleotide;
    int size;
    printf("Enter the length of the DNA strand\n");
    scanf("%d", &size);
    char strand[size];
    printf("Enter the half strand DNA code\n");
    fgets(strand, size, stdin);
    for (int i = 0; i < size; i++)
    {
        new_nucleotide = (nucleotide *)malloc(sizeof(nucleotide));
        if (strand[i] == 'A')
        {
            (*new_nucleotide).base1 = A;
        }
        else if (strand[i] == 'G')
        {
            (*new_nucleotide).base1 = G;
        }
        else if (strand[i] == 'T')
        {
            (*new_nucleotide).base1 = T;
        }
        else if (strand[i] == 'C')
        {
            (*new_nucleotide).base1 = C;
        }
        (*new_nucleotide).next = NULL;

        if (first == NULL)
        {
            (*new_nucleotide).prev = NULL;
            first = new_nucleotide;
        }
        else
        {
            var_nucleotide = first;
            while ((*var_nucleotide).next != NULL)
            {
                var_nucleotide = (*new_nucleotide).next;
            }
            (*var_nucleotide).next = new_nucleotide;
            (*new_nucleotide).prev = var_nucleotide;
            (*new_nucleotide).next = NULL;
        }
    }
    return (first);
}

nucleotide *display(nucleotide *first)
{
    nucleotide *var_nucleotide;
    var_nucleotide = first;
    while ((*var_nucleotide).next != NULL)
    {
        printf("%d____%d\n", &(*var_nucleotide).base1, &(*var_nucleotide).base2);
        printf(" |    |\n");
    }
    printf("%d____%d\n");
    return (first);
}