#include <stdio.h>
#include <string.h>
#define TAM 12
int main()
{
    double m[TAM][TAM], a = 0.0;
    int n, i, j;
    char t[2];
    scanf("%d", &n);
    scanf("%s", &t);

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%lf", &m[i][j]);
            if (j == n)
            {
                a += m[i][j];
            }
        }
    }
    if (strcmp(t, "S") == 0)
    {
        printf("%.1lf\n", a);
    }
    else if (strcmp(t, "M") == 0)
    {
        printf("%.1lf\n", a / TAM);
    }
    return 0;
}