#include<stdio.h>
#include<string.h>
#define TAM 100
int main()
{
    void copia(char *a, char *b);
    char frase1[TAM], frase2[TAM], frase3[TAM];
    scanf("\n%[^\n]", frase1);

    strcpy(frase2, frase1); //cópia de strings


    printf("str1: %s\n", frase1);
    printf("str2: %s\n", frase2);
    copia(frase3, frase1);
    printf("str3: %s\n", frase3);
    return 0;
}
void copia(char *a, char *b)
{
    int i;
    for (i = 0; b[i]!= '\0'; i++)
    {
        a[i]=b[i];
    }
    a[i]='\0';
}