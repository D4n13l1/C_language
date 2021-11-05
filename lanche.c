#include<stdio.h>
int main(void)
{
    int c, qtd;
    scanf("%i %i", &c, &qtd);
    if (c==1)
        printf("Total: R$ %.2f\n", qtd*4.00);
    else if(c==2)
        printf("Total: R$ %.2f\n", qtd*4.50);
    else if(c==3)
        printf("Total: R$ %.2f\n", qtd*5.00);
    else if(c==4)
        printf("Total: R$ %.2f\n", qtd*2.00);
    else if(c==5)
        printf("Total: R$ %.2f\n", qtd*1.50);
    return 0;
}