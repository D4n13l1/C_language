#include<stdio.h>
#include<string.h>
#define TAM 100
int main()
{
    char str[TAM], strl[TAM];
    for (int  i = 0; i < 3; i++)
    {    
        scanf("\n%[^\n]", str);// leitura de frase
        // scanf("%s", str); // leitura de palavra
        printf("str = %s\n", str);    
        for (int j = 0; j < strlen(str); j++)// criptografia de cesar
        {
            strl[j] = str[j]+3;        
        }
        printf("Letra %c Str: %s\n", strl[2], strl);
    }

    return 0;
}