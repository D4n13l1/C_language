#include <stdio.h>
#include <string.h>
#define TAM 50
int main(void)
{
    int n, teste, i = 0, l;
    char cifra[TAM], cesar;
    scanf("%i", &teste);
    while(i < teste)
    {
        scanf("%s %d", &cifra, &n);
        l = strlen(cifra);
        for (int j = 0; j < l; j++)
        {
            cesar = cifra[j] - n;
            if (cesar < 65)
                cesar += 26;
            printf("%c", cesar);
        }
        i++;
        printf("\n");
    }
    return 0;
}