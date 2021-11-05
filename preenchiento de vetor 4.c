#include <stdio.h>
int main()
{
    int par[5], impar[5];
    int qp = 0, qi = 0; // quantidade de pares, qunatidade de impares
    int x;
    int i;

    for ( i = 0; i < 15; i++)
    {
        scanf("%i", &x);

        if (x%2==0)
        {
            par[qp]= x;
            qp++;
            if (qp==5)
            {
                for (int j = 0; j < 5; j++)
                    printf("par[%i] = %i\n", j, par[j]);
                qp=0;
            }
        }
        else
        {
            impar[qi] = x;
            qi++;
            if (qp==5)
            {
                for (int j = 0; j < 5; j++)
                printf("impar[%i] = %i\n", j, impar[j]);
            qi=0;
            }
        }
    }
    for (int j = 0; j < qi; j++)
        printf("impar[%i] = %i\n", j, impar[j]);
    for (int j = 0; j < qp; j++)
        printf("impar[%i] = %i\n", j, impar[j]);
    return 0;
}