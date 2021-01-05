#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int labels[20];
int count = 0;

int check_label(int k)
{
    int i;
    for (i = 0; i < count; i++)
    {
        if (k == labels[i])
            return 1;
    }
    return 0;
}

int main()
{
    FILE *in_file, *out_file;
    char fname[10], operator[10], ch;
    char operand_a[8], operand_b[8], result[8];
    int i = 0, j = 0;

    printf("\n Enter filename of the intermediate code\n");
    scanf("%s", fname);
    in_file = fopen(fname, "r");
    out_file = fopen("target.txt", "w");
    if (in_file == NULL || out_file == NULL)
    {
        printf("\n Error opening the file");
        exit(0);
    }
    while (!feof(in_file))
    {
        fscanf(in_file, "%s", operator);
        i++;
        if (check_label(i))
        {
            fprintf(out_file, "\nlabel#%d", i);
        }
        if (strcmp(operator, "print") == 0)
        {
            fscanf(in_file, "%s", result);
            fprintf(out_file, "\n\tOUT %s", result);
        }
        if (strcmp(operator, "goto") == 0)
        {
            fscanf(in_file, "%s %s", operand_a, operand_b);
            fprintf(out_file, "\n\tJMP %s,labels#%s", operand_a, operand_b);
            labels[count++] = atoi(operand_b);
        }
        if (strcmp(operator, "[]=") == 0)
        {
            fscanf(in_file, "%s %s %s", operand_a, operand_b, result);
            fprintf(out_file, "\n\tSTORE %s[%s],%s", operand_a, operand_b, result);
        }
        if (strcmp(operator, "uminus") == 0)
        {
            fscanf(in_file, "%s %s", operand_a, result);
            fprintf(out_file, "\n\tLOAD -%s,R1", operand_a);
            fprintf(out_file, "\n\tSTORE R1,%s", result);
        }
        switch (operator[0])
        {
        case '*':
            fscanf(in_file, "%s %s %s", operand_a, operand_b, result);
            fprintf(out_file, "\n\tLOAD %s R0", operand_a);
            fprintf(out_file, "\n\tLOAD %s,R1", operand_b);
            fprintf(out_file, "\n\tMUL R1,R0");
            fprintf(out_file, "\n\tSTORE R0,%s", result);
            break;
        case '+':
            fscanf(in_file, "%s %s %s", operand_a, operand_b, result);
            fprintf(out_file, "\n\tLOAD %s,R0", operand_a);
            fprintf(out_file, "\n\tLOAD %s,R1", operand_b);
            fprintf(out_file, "\n\tADD R1,R0");
            fprintf(out_file, "\n\tSTORE R0,%s", result);
            break;
        case '-':
            fscanf(in_file, "%s %s %s", operand_a, operand_b, result);
            fprintf(out_file, "\n\tLOAD %s,R0", operand_a);
            fprintf(out_file, "\n\tLOAD %s,R1", operand_b);
            fprintf(out_file, "\n\tSUB R1,R0");
            fprintf(out_file, "\n\tSTORE R0,%s", result);
            break;
        case '/':
            fscanf(in_file, "%s %s %s", operand_a, operand_b, result);
            fprintf(out_file, "\n\tLOAD %s,R0", operand_a);
            fprintf(out_file, "\n\tLOAD %s,R1", operand_b);
            fprintf(out_file, "\n\tDIV R1,R0");
            fprintf(out_file, "\n\tSTORE R0,%s", result);
            break;
        case '%':
            fscanf(in_file, "%s %s %s", operand_a, operand_b, result);
            fprintf(out_file, "\n\tLOAD %s,R0", operand_a);
            fprintf(out_file, "\n\tLOAD %s,R1", operand_b);
            fprintf(out_file, "\n\tDIV R1,R0");
            fprintf(out_file, "\n\tSTORE R0,%s", result);

            break;
        case '=':
            fscanf(in_file, "%s %s", operand_a, result);
            fprintf(out_file, "\n\tSTORE %s %s", operand_a, result);
            break;
        case '>':
            j++;
            fscanf(in_file, "%s %s %s", operand_a, operand_b, result);
            fprintf(out_file, "\n\tLOAD %s,R0", operand_a);
            fprintf(out_file, "\n\tJGT %s,labels#%s", operand_b, result);
            labels[count++] = atoi(result);
            break;
        case '<':
            fscanf(in_file, "%s %s %s", operand_a, operand_b, result);
            fprintf(out_file, "\n\tLOAD %s,R0", operand_a);
            fprintf(out_file, "\n\tJLT %s,labels#%s", operand_b, result);
            labels[count++] = atoi(result);
            break;
        }
        fprintf(out_file, "\n");
    }
    fclose(out_file);
    fclose(in_file);
    return 0;
}