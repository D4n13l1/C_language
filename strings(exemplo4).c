#include <stdio.h>
#include <string.h>
#define TAM 100
int total_letras(char *a)
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    return i;
}
int total_letras_sem_espaco(char *a)
{
    int i, c = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ')
            c++;
    }
    return c;
}
int main()
{
    char frase1[TAM];
    scanf("\n%[^\n]", frase1);

    printf("str1: %s  Total de letras usando strlen: %ld\n", frase1, strlen(frase1));
    printf("str1: %s  Total de letras usando ciclo: %d\n", frase1, total_letras(frase1));
    printf("str1: %s  Total de letras sem espaco usando ciclo: %d\n", frase1, total_letras_sem_espaco(frase1));
    return 0;
}