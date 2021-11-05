#include <stdio.h>
int main(void)

{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (A < B + C && B < A + C && C < A + B)
        printf("Perimetro = %.1f\n", A + B + C);
    else
        printf("Area = %.1f\n", C * (A + B) / 2);
    return 0;
}