#include<stdio.h>
#include<math.h>
int main(void)
{
    float R1, R2, delta, a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    delta = pow(b, 2) - 4*a*c;
    R1 = (-b + sqrt(delta))/(2*a);
    R2 = (-b - sqrt(delta))/(2*a);
    if (delta < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }
    return 0;
}