#include <stdio.h>
#include <stdlib.h>
int determinant(int mat[3][3]);
int traceOfMatrix(int T[3][3]);
int matrix_product(int A[3][3], int B[3][3]);
int mat_in[3][3], in_mat[3][3];
int main()
{

    printf("## Inverse of a matrix ##\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter the A(%d%d) :", i + 1, j + 1);
            scanf("%d", &mat_in[i][j]);
        }
    }
    int deter = determinant(mat_in);
    if (deter == 0)
    {
        printf("\nInverse cannot be find !!");
        exit(0);
    }
    int traceA = traceOfMatrix(mat_in);
    matrix_product(mat_in, mat_in);
    int traceA2 = traceOfMatrix(in_mat);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int test=0;
            if(i==j)
            {
                test=1;
            }
            in_mat[i][j] -= (traceA * mat_in[i][j]);
            in_mat[i][j] -= test*(traceA2 - traceA*traceA)/2;
            printf("%d ", in_mat[i][j]);
        }
        printf("\n");
    }
    printf("______________\n");
    printf("%d", deter);

    return 0;
}
int determinant(int mat[3][3])
{
    int deter;
    deter = mat[0][0] * mat[1][1] * mat[2][2];
    deter += (mat[0][1] * mat[1][2] * mat[2][0]);
    deter += (mat[0][2] * mat[1][0] * mat[2][1]);
    deter -= (mat[0][0] * mat[1][2] * mat[2][1]);
    deter -= (mat[0][1] * mat[1][0] * mat[2][2]);
    deter -= (mat[0][2] * mat[1][1] * mat[2][0]);
    return (deter);
}
int matrix_product(int A[3][3], int B[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            in_mat[i][j] = 0;
            for (int n = 0; n < 3; n++)
            {
                in_mat[i][j] = in_mat[i][j] + (A[i][n] * B[n][j]);
            }
        }
    }
    return 0;
}
int traceOfMatrix(int T[3][3])
{
    int trace;
    trace = T[0][0] + T[1][1] + T[2][2];
    return (trace);
}
