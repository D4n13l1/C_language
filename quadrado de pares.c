#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    if(N>5 && N<2000)
{
        for (int c = 2; c<=N; c =c + 2)
        {
        printf("%i^2 = %i\n", c, c*c);
        }
    }
    system("pause");
    return 0;
}