#include<stdio.h>
int main(void)
{
    int a, b, c;
    int x, y, z;
    int temp;
    scanf("%i %i %i", &a, &b, &c);
    x=a;
    y=b;
    z=c;

    if (x>y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    else if (x>z)
    {
        temp = x;
        x = z;
        z = temp;
    }
    else if (y>z)
    {
        temp = y;
        y = z;
        z = temp;
    }
    printf("%i\n%i\n%i\n\n", x, y, z);
    printf("%i\n%i\n%i\n", a, b, c);

    return 0;
}