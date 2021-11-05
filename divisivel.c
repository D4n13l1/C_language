#include <stdio.h>
int main()
{
    int a, b;
    printf("digite os valores inteiros:\n");
    scanf("%i %i", &a, &b);
    if (b==0)
        printf("divisao por 0 nao permitido");
    else if(a%b == 0)
        printf("%i eh divisivel por %i, e o resultado da diviao eh: %i", a, b, a/b);
    else
        printf("nao eh divisivel");

        
    return 0;
}