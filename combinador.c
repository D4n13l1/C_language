#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, i=0;
    char str1[52], str2[52];
    int t1, t2, tm; //tamanho string1, tamanho string2, tamanho do maior
    scanf("%d", &n);
    while (i< n)
    {
        scanf("%s%s", str1, str2);
        t1 = strlen(str1);
        t2 = strlen(str2);
        if (t1 < t2)
            tm = t2;
        else
            tm = t1;

        for (int j = 0; j < tm; j++)
        {
            if (j < t1)
                printf("%c", str1[j]);
            if (j < t2)
                printf("%c", str2[j]);
        }
        printf("\n");
        i++;
    }
    
    exit(EXIT_SUCCESS);
}