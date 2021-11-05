#include <stdio.h>
#include <string.h>
#define TAM 12
int main()
{
    double m[TAM][TAM], a = 0.0;
    int i, j, temp = 0;
    char O[2];
    scanf("%s", &O);

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%lf", &m[i][j]);
            if ((i > j) && (i > TAM - j - 1))
            {
                a += m[i][j];
                temp += 1;
            }
        }
    }
    if (strcmp(O, "S") == 0)
    {
        printf("%.1lf\n", a);
    }
    else if (strcmp(O, "M") == 0)
    {
        printf("%.1lf\n", a / temp);
    }
    return 0;
}