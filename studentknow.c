#include <stdio.h>
#include <stdlib.h>

int main()
{
    int batch;
    printf("\nEnter the number of student in a batch.");
    scanf("%d", &batch);
    int student[4][batch][1];
    for (int i = 0; i < 4; i++)
    {
        printf("\nBatch '%d'\n", i + 1);
        for (int j = 0; j < batch; j++)
        {
            printf("\nEnter mark of student %d :", j + 1);
            scanf("%d", &student[i][j][0]);
        }
    }
    int bat[4], tut[4];
    for (int i = 0; i < 4; i++)
    {
        bat[i] = 0;
        for (int j = 0; j < batch; j++)
        {
            if (student[i][j][0] < 25)
            {
                bat[i]++;
            }
        }
        if (bat[i] % 4 != 0)
        {
            tut[i] = (bat[i] / 4) + 1;
        }
        else
        {
            tut[i] = bat[i] / 4;
        }
    }
    int batch1[tut[0]], batch2[tut[1]], batch3[tut[2]], batch4[tut[3]];
    int *jagbat[] = {batch1, batch2, batch3, batch4};
    int bat_copy[4], ext4 = 0;
    for (int i = 0; i < 4; i++)
    {
        int j = 0;
        bat_copy[i] = bat[i];
        while (j < tut[i] - 1)
        {
            jagbat[i][j] = 4;
            bat[i] -= 4;
            j++;
        }
        jagbat[i][j] = bat[i];
        if (bat[i] == 4)
        {
            ext4++;
        }
    }
    printf("\nThe details are as below :");
    printf("\nBatch Tutors Group \n");
    for (int i = 0; i < 4; i++)
    {
        int j = 0;
        printf("    %d   %d   ", i + 1, tut[i]);
        while (j < tut[i])
        {
            printf("%d ", jagbat[i][j]);
            j++;
        }
        printf("\n");
    }
    printf("\nNo. of batch having tutor with exact 4 is %d.", ext4);
    return 0;
}