#include <stdio.h>
int main(void)
{
    int vetor[10];
    int n, v;
    scanf("%i", &n);
    vetor[0] = n;
    void preenchimento_de_vetor(int vetor[], int n);

    preenchimento_de_vetor(vetor, n);
    return 0;
}
void preenchimento_de_vetor(int vetor[], int n)
{
        for (int i = 0; i < 10; i++)
    {
        printf("N[%i] = %d\n", i, n);
        n = n * 2;
    }
}