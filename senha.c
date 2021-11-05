#include <stdio.h>
#include <string.h>
#define tam 100
int main()
{
    char senha[tam];
    int resp;
    do
    {
        scanf("%s", &senha);
        resp = strcmp(senha, "2003");
        if (resp)
        {
            printf("SENHA INVALIDA!!!\nTente novamente\n");
        }
        else
        {
            printf("Parabens!\nAcesso liberado\n") ;
            break;
        }
    } while (1);
    return 0;
}