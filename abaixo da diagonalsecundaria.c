#include <stdio.h>
#include <string.h>
#define TAM 12
int main()
{
    int i, j, temp = 0;
    char t[2];
    double soma = 0.0;
    double m[TAM][TAM];
    scanf("%s", &t);
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%lf", &m[i][j]);
            if (i > TAM - j - 1)
            {
                soma += m[i][j];
                temp += 1;
            }
        }
    }
    if (strcmp(t, "S") == 0)
    {
        printf("%.1lf", soma);
    }
    else if (strcmp(t, "M") == 0)
    {
        printf("%.1lf", soma / temp);
    }

    return 0;
}