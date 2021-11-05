#include <stdio.h>
#include <math.h>

int main() 
{
    double R;    
    scanf("%lf", &R);
    printf("VOLUME = %.3lf\n", 3.14159 * 4/3 * pow(R, 3.0));

    return 0;
}