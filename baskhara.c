#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, Delta, x1, x2;
    printf("A seguir, insira os valores que acompanham o x^2, o x, e a constante da funcao quadratica:\n");
    printf("insira o valor que acompanha x^2:");
    scanf("%lf", &a);
    printf("insira o valor atribuido a x:");
    scanf("%lf", &b);
    printf("insira o valor atribuido a constante:");
    scanf("%lf", &c);
    Delta = pow(b,2) - 4*a*c;
    x1 = (-b + Delta)/2;
    x2 = (-b - Delta)/2;
    printf("X1:%.3lf\n X2:%.3lf\n", x1, x2);
    
    return 0;
}