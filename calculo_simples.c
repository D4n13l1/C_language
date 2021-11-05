#include <stdio.h>
int main()
{
    int p1, np1, p2, np2;
    float v1, v2;
    scanf("%d" "%d" "%f", &p1, &np1, &v1);
    scanf("%d" "%d" "%f", &p2, &np2, &v2);
    printf("VALOR A PAGAR: R$ %.2f\n", np1*v1+np2*v2);
return 0;
}