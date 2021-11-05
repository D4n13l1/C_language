#include <stdio.h>
int main(void)
{
    double n[100], x;
    int i = 0;
    scanf("%lf", &x);

    for (i = 0; i < 100; i++)
    {
        n[i] = n[i - 1] / 2;
        n[0]=x;
        printf("N[%i] = %lf\n", i, n[i]);
    }

    return 0;
}