#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int X[n];
    int i = 1, menor = 0, pos = 0;
    scanf("%d", &X[0]);
    menor = X[0];
    pos = 0;
    while (i < n)
    {
        scanf("%d", &X[i]);
        if (X[i]< menor)
        {
            menor =X[i];
            pos = i;
        }

        i++;
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

    return 0;
}