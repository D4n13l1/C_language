/*
1: 2
2, 3, 5: 5
4: 4
6, 9, 0: 6
7: 3
8: 7

*/
#include <stdio.h>
#include <string.h>
#define TAM 100
int main()
{
    char palavra[TAM];
    int n, temp = 0;
    scanf("%i", &n);

    for (int j = 0; j < n; j++)
    {
        scanf("%s", palavra);
        for (int i = 0; i < strlen(palavra); i++)
        {
            if (palavra[i] == '1')
                temp += 2;
            if (palavra[i] == '7')
                temp += 3;
            if (palavra[i] == '4')
                temp += 4;
            if (palavra[i] == '2' || palavra[i] == '3' || palavra[i] == '5')
                temp += 5;
            if (palavra[i] == '6' || palavra[i] == '0' || palavra[i] == '9')
                temp += 6;
            if (palavra[i] == '8')
                temp += 7;
        }
        printf("%i leds\n", temp);
        temp = 0;
    }
    return 0;
}