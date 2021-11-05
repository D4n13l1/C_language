#include <stdio.h>
#define TAM 6
int main()
{
    int soma = 0;
    printf("\nMatriz pricipal\n");
    int i, j;
    int m[TAM][TAM] = {{1,  2,  3,  4,  5,  6},
                       {7,   8,  9, 10, 11, 12},
                       {13, 14 ,15, 16, 17, 18},
                       {19, 20 ,21, 22, 23, 24},
                       {25, 26, 27, 28, 29, 30},
                       {31, 32, 33, 34, 35, 36}};
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("%2d\n", m[i][j]);
        }
    }

    printf("\nDiagonal pricipal\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if(i == j){
            printf("%2d\n", m[i][j]);
            soma+= m[i][j];
            }
        }
    }    
    printf("soma: %i\n", soma);
    soma = 0;    

    printf("\nDiagonal secundaria\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if(i == TAM - j - 1)
            {
                printf("%2d\n", m[i][j]);
                soma+= m[i][j];
            }
        }
    }        
    printf("soma: %i\n", soma);
    soma = 0;

    printf("\nTriangulo inferior\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if(i<j)
            {
                printf("%i\n", m[i][j]);
                soma+=m[i][j];
            }
        }
    }            
    printf("soma: %i\n", soma);
    soma = 0;

    printf("\nTriangulo superior\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if(i>j)
            {
                printf("%i\n", m[i][j]);
                soma+=m[i][j];
            }
        }
    }            
    printf("soma: %i\n", soma);
    soma = 0;    

    printf("\nsecundaria inferior\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if(i > TAM - j - 1)
            {
                printf("%i\n", m[i][j]);
                soma+=m[i][j];
            }
        }
    }            
    printf("soma: %i\n", soma);
    soma = 0;

    printf("\nsecundaria superior\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if(i < TAM - j - 1)
            {
                printf("%i\n", m[i][j]);
                soma+=m[i][j];
            }
        }
    }            
    printf("soma: %i\n", soma);
    soma = 0;

    printf("\nArea superior\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if((i < TAM - j - 1) && (i<j))
            {
                printf("%i\n", m[i][j]);
                soma+=m[i][j];
            }
        }
    }            
    printf("soma: %i\n", soma);
    soma = 0;

    

    return 0;
}