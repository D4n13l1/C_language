#include <stdio.h>
#define TAM 1110
int main()
{
    long long int fib[TAM];
    long long int n = 0;
    long long int i = 0;
    long long int contador = 0, t=61;
    scanf("%lli",&t);
    while(contador < t){
        scanf("%lli", &n);
        for (i = 1; i < TAM; i++)
        {   
            fib[0] = 0;
            fib[1] = 1;
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        printf("Fib(%lli) = %lld\n", n, fib[n]);
        contador++;
    }
    return 0;
}