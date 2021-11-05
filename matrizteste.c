#include <stdio.h>
int main()
{
    int matrix[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Matrix [%i][%i]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n\n_____________________________________\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("matrix[%d][%d] = %d\n",i, j, matrix[i][j]);
        }
    }

    return 0;
}