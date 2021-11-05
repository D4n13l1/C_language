#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "abc";
    char str2[] = "acd";
    int retorno;
    retorno = strcmp(str1, str2);
    printf("Retorno = %d\n", retorno);


}