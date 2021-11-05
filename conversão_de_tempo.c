#include <stdio.h>
int main()
{
    int N, seg, min, hor;
    scanf("%d", &N);
    hor = N/3600;
    min = (N-(hor*3600))/60;
    seg = N-((hor*3600)+(min*60));
    printf("%d:%d:%d\n", hor, min, seg);
    return 0;
}