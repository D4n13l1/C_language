#include <stdio.h>
int main()
{
    int fat;
    int resposta = 1;
    printf("Digite o numero:\n");
    scanf("%i", &fat);

    for(; fat >=1; --fat)
    {
        resposta *= fat;
    }
    printf("O numero fatorial eh: %i\n", resposta);

    return 0;
}