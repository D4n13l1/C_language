#include <stdio.h>
#include <ctype.h>
int resultado;
int main()
{

    char letter;
    short num1, num2;
    void jogo_paula(int num1, char letter, int num2);
    int contador, i = 0;
    scanf("%d", &contador);
    while (i < contador)
    {
        scanf("%hd %c %hd", &num1, &letter, &num2);
        jogo_paula(num1, letter, num2);
        resultado = 0;
        i++;
    }
    return 0;
}
void jogo_paula(int num1, char letter, int num2)
{
    if (num1 == num2)
        resultado = num1 * num2;
    else if (isupper(letter))
        resultado = num2 - num1;
    else if (islower(letter))
        resultado = num1 + num2;
    printf("%i\n", resultado);
}