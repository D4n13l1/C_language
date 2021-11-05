//concatenar strings
#include<stdio.h>
#include<string.h>
#define TAM 100
void concatena(char *a, char *b)
{
    int i;
    int j=strlen(a);
    a[j]=' ';
    j++;
    for (i = 0; b[i]!= '\0'; i++)
    {
        a[j]=b[i];
        j++;
    }
    a[j]='\0';
}
int main()
{
    char frase1[TAM], frase2[TAM], frase3[TAM*2+1];
    scanf("\n%[^\n]", frase1);
    scanf("\n%[^\n]", frase2);
    strcpy(frase3, frase2);
    strcat(frase2,  " ");
    strcat(frase2, frase1);
    printf("str1: %s\n", frase1);
    printf("str2: %s\n", frase2);
    concatena(frase3, frase1);
    printf("str3: %s\n", frase3);
    
}