#include <stdio.h>
#define TAM 9
int main(void)
{
    int n, i = 0, j = 0, teste = 0, x = 0;
    printf("Digite a quantidade de testes que deseja fazer: ");
    scanf("%d", &n);
    int sudo[TAM][TAM], linha[TAM], coluna[TAM];
    int somaline = 0, somacol = 0;
    int somaq[TAM] = {0};
    printf("Digite a sua solucao sudoku\n");
    while (teste < n)
    {
        for (i = 0; i < TAM; i++)
            for (j = 0; j < TAM; j++)
                scanf("%i", &sudo[i][j]);

        for (i = 0; i < TAM; i++)
        {
            somaline = 0;
            for (j = 0; j < TAM; j++)
                somaline += sudo[i][j];
            linha[i] = somaline;
        }

        for (j = 0; j < TAM; j++)
        {
            somacol = 0;
            for (i = 0; i < TAM; i++)
                somacol += sudo[i][j];
            coluna[j] = somacol;
        }

        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                somaq[0] += sudo[i][j];

        for (i = 0; i < 3; i++)
            for (j = 3; j < 6; j++)
                somaq[1] += sudo[i][j];

        for (i = 0; i < 3; i++)
            for (j = 6; j < 9; j++)
                somaq[2] += sudo[i][j];

        for (i = 3; i < 6; i++)
            for (j = 0; j < 3; j++)
                somaq[3] += sudo[i][j];

        for (i = 3; i < 6; i++)
            for (j = 3; j < 6; j++)
                somaq[4] += sudo[i][j];

        for (i = 3; i < 6; i++)
            for (j = 6; j < 9; j++)
                somaq[5] += sudo[i][j];

        for (i = 6; i < 9; i++)
            for (j = 0; j < 3; j++)
                somaq[6] += sudo[i][j];

        for (i = 6; i < 9; i++)
            for (j = 3; j < 6; j++)
                somaq[7] += sudo[i][j];

        for (i = 6; i < 9; i++)
            for (j = 6; j < 9; j++)
                somaq[8] += sudo[i][j];

/*        for (i = 0; i < 9; i++)
        {
            printf("somaq%i = %i\nsoma linha %i = %i\nSoma coluna %i = %i\n", i, somaq[i], i, linha[i], i, coluna[i]);
        }
*/
        for (i = 0; i < TAM; i++)
        {
            if ((linha[i] == 45) && (coluna[i] == 45) && (somaq[i] == 45))
            {
                x = 1;
            }
            else
            {
                x = 0;
            }
        }

        for (i = 0; i < 9; i++)
            somaq[i] = 0;

        // printf("%i", x);
        if (x == 0){
            printf("Instancia %i\n", teste + 1);
            printf("NAO\n\n");
            }
        else if (x == 1){
            printf("Instancia %i\n", teste + 1);
            printf("SIM\n\n");
        }
        teste++;
    }
    system("pause");
    return 0;
}