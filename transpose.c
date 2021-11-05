#include <stdio.h>
#include <string.h>
#define TAM 4
int main()
{
    int m[TAM][TAM];
    int mt[TAM][TAM];
    int i, j;

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (i == j)
                m[i][j] = 1;
            else if(i<j)
                m[i][j] = 2;
            else
                m[i][j] = 3;

            mt[j][i] = m[i][j];
        }
    }

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("[%i][%i]: %i\n", i, j, m[i][j]);
        }
    }
    printf("\n____________________________________\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("[%i][%i]: %i\n", i, j, mt[i][j]);
        }
    }
    return 0;
}