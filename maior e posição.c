#include<stdio.h>
int main(void)
{
    int num, position;
    int maior=0;
    for (int i=1;i<101;i++)
    {
        scanf("%i", &num);
        if(maior<num)
        {
            maior=num;
            position=i;
        }
    }
    printf("\n%i\n%i\n", maior, position);
    system("pause");
    return 0;
}