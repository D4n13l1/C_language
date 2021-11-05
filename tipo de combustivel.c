#include<stdio.h>
int main(void)
{
    int  tipo, g, a, d;
    a = 0;
    g = 0;
    d = 0;
    scanf("%i", &tipo);
    while (tipo!=4)
    {
        scanf("%i", &tipo);
        if (tipo==1)
            a+=1;
        else if (tipo==2)
            g+=1;
        else if (tipo==3)
            d+=1;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\n", a);
    printf("Gasolina: %i\n", g);
    printf("Diesel: %i\n",d);
}