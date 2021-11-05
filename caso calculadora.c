#include<stdio.h>
#include<math.h>
int main(void)
{
    float soma(float num1, float num2);
    float multi(float num1, float num2);
    float divis(float num1, float num2);
    float subt(float num1,  float num2);
    float a, b;
    char c;

    printf("Bem vindo a minha primeira calculadora!!\n\n");
    printf("Digite S para somar os valores.\n");
    printf("Digite M para multiplicar os valores.\n");
    printf("Digite D para dividir os valores.\n");
    printf("Digite I para subrair os valores\n");
    printf("Digite B para sair da calculadora\n");
    scanf("%c", &c);    

    printf("Digite os valores\n");
    if (c == 'S')
    {
        scanf("%f %f", &a, &b);
        float somatoria = soma(a, b);
        printf("%f + %f = %f\n",a, b, somatoria);
    }
    else if (c == 'M')
    {
        scanf("%f %f", &a, &b);
        float multiplicacao = multi(a, b);
        printf("%f * %f = %.3f\n",a, b, multiplicacao);
    }
    else if (c == 'I')
    {
        scanf("%f %f", &a, &b);
        float subtr = subt(a, b);
        printf("%f - %f = %f",a, b, subtr);
    }
    else if (c == 'D')
    {
        scanf("%f %f", &a, &b);
        float division = divis(a,b);
        printf("%f / %f = %.3f\n", a, b, division);
    }
    else if (c == 'B')
    {
        printf("Obrigado por usar a calculadora\n");
        system("pause");
    }
    else
        printf("entrada invalida\n");

    return 0;
}

float soma( float num1, float num2)
{
    float soma = num1 + num2;
    return soma;
}

float multi( float num1, float num2)
{
    float multi = num1*num2;
    return multi;
}

float divis (float num1, float num2)
{
    float divis = num1/num2;
    return divis;
}
float subt(float num1,  float num2)
{
    float subt = num1-num2;
    return subt;
}