#include<stdio.h>
int main(void)
{
    double A[100];
    void selecao_em_vetor(double A[], int n);
    selecao_em_vetor(A, 100);
    
    return 0;
}
void selecao_em_vetor(double A[], int n)
{
        for (int i = 0; i < 100; i++)
        scanf("%lf", &A[i]);
    for (int i = 0; i < 100; i++)
        if (A[i] <= 10)
            printf("A[%i] = %.1lf\n", i, A[i]);
}
    