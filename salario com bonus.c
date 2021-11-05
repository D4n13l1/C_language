#include <stdio.h>
int main()
{
    char nome;
    float sal, vendas, x;
    scanf("%s %f %f", &nome, &sal, &vendas);
    x = sal + (15*vendas)/100;
    printf("TOTAL = R$ %.2f\n", x);
    return 0;
}
