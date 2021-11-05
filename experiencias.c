#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n, e;
    int c=0;
    int r=0;
    int s=0;
    int soma=0;
    char t;
    scanf("%i", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%i %c", &e, &t);
        if (t== 'C')
            c+=e;
        else if (t == 'R')
            r+=e;
        else if(t == 'S')
            s+=e;
    soma+=e;
    }

    printf("Total: %i cobaias\n", soma);
    printf("Total de coelhos: %i\n", c);
    printf("Total de ratos: %i\n", r);
    printf("Total de sapos: %i\n", s);
    
    printf("Percetual de coelhos: %.2lf %%\n", (double)c*100/soma);
    printf("Percetual de ratos: %.2lf %%\n", (double)r*100/soma);
    printf("Percetual de sapos: %.2lf %%\n", (double)s*100/soma);
    return 0;
}