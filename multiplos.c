#include<stdio.h>
int main(void)
{
    int a, b;
    scanf("%i %i", &a, &b);
    if (b%a==0 || a%b==0)
        printf("Sao multiplos\n");
    else
        printf("Nao sao multiplos\n");

    return 0;
}