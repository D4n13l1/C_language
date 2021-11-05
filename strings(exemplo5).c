#include<stdio.h>
#include<string.h>
#define TAM 100
int main()
{
    void copia(char *a, char *b);
    char frase1[TAM], frase2[TAM*2+1], frase3[TAM*2+1];
    scanf("\n%[^\n]", frase1);
    scanf("\n%[^\n]", frase2);
    strcpy(frase3, frase1);
    strcat(frase2, "");
    strcat(frase2, frase1);


    int c1 = strcmp(frase2, frase1);
    int c2 = strcmp(frase1, frase3);


    printf("C1: %d\n C2: %d\n", c1, c2);
    printf("str1: %s\n", frase1);
    printf("str2: %s\n", frase2);
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