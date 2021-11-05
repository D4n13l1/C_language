#include<stdio.h>
int main(void)
{   
    float x, y;
    int N;
    scanf("%i", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%f %f", &x, &y);
        if (y==0.0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", x/y);
    }
    system("pause");
}