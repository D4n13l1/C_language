#include<stdio.h>
int main(void)
{
    int N[10], t, temp=0;
    scanf("%d", &t);
    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, temp);
        temp++;
        if(temp==t)
            temp=0;
    }
}