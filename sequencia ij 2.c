#include <stdio.h>
int main(void)
{
    int a;
    for ( int i = 1; i < 10; i+=2)
    {
        for (int j = 7; j >=5 ; j--)
            printf("I=%i J=%i\n", i, j);
    }
    system("pause");
    return 0;
}