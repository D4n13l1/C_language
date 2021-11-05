#include <stdio.h>
int main(void)
{
    int tam_pista, mt, resp;
    scanf("%i %i", &tam_pista, &mt);
    resp = tam_pista % mt;
    printf("%i\n", resp);

    return 0;
}