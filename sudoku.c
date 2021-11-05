#include <stdio.h>
#define TAM 9
int main(void)
{
    int n, i = 0, j = 0, teste = 1, x = 0;
    scanf("%d", &n);
    int sudo[TAM][TAM], linha[TAM], coluna[TAM];
    int somaline = 0, somacol = 0;
    int somaq[TAM] = {0};
    do //condição do laço
    {
        for (i = 0; i < TAM; i++) // lê cada digito da matriz
            for (j = 0; j < TAM; j++){
                scanf("%i", &sudo[i][j]);
                if((sudo[i][j])>9)
                {   printf("Instancia %i\n", teste);
                    printf("NAO\n\n");
                    break;
                }
            }

        for (i = 0; i < TAM; i++) //verifica a soma de cada linha
        {
            somaline = 0;
            for (j = 0; j < TAM; j++)
                somaline += sudo[i][j];
            linha[i] = somaline;
        }

        for (j = 0; j < TAM; j++) //verifica a soma de cada coluna
        {
            somacol = 0;
            for (i = 0; i < TAM; i++)
                somacol += sudo[i][j];
            coluna[j] = somacol;
        }
        for (i = 0; i < 3; i++) // verifica quadrante 1
        {
            for (j = 0; j < 3; j++)
                somaq[0] += sudo[i][j];
        }
        for (i = 0; i < 3; i++) //verifica quadrante 2
        {
            for (j = 3; j < 6; j++)
                somaq[1] += sudo[i][j];
        }
        for (i = 0; i < 3; i++) //verifica quadrante 3
        {
            for (j = 6; j < 9; j++)
                somaq[2] += sudo[i][j];
        }
        for (i = 3; i < 6; i++) //verifica quadrante 4
        {
            for (j = 0; j < 3; j++)
                somaq[3] += sudo[i][j];
        }
        for (i = 3; i < 6; i++) //verifica quadrante 5
        {
            for (j = 3; j < 6; j++)
                somaq[4] += sudo[i][j];
        }
        for (i = 3; i < 6; i++) //verifica quadrante 6
        {
            for (j = 6; j < 9; j++)
                somaq[5] += sudo[i][j];
        }
        for (i = 6; i < 9; i++) //verifica quadrante 7
        {
            for (j = 0; j < 3; j++)
                somaq[6] += sudo[i][j];
        }
        for (i = 6; i < 9; i++) //verifica quadrante 8
        {
            for (j = 3; j < 6; j++)
                somaq[7] += sudo[i][j];
        }
        for (i = 6; i < 9; i++) // verifica quadrante 9
        {
            for (j = 6; j < 9; j++)
                somaq[8] += sudo[i][j];
        }

        for (i = 0; i < TAM; i++)
        { //dá a condição
            if ((linha[i] == 45) && (coluna[i] == 45) && (somaq[i] == 45))
            {
                x = 1;
            }
            else
            {
                x = 0;
            }
        }

        if (x == 0)
        { //verifica condição e dá o resultado
            printf("Instancia %i\n", teste);
            printf("NAO\n\n");
        }
        else if (x == 1)
        {
            printf("Instancia %i\n", teste);
            printf("SIM\n\n");
            for (i = 0; i < 9; i++)
            { // zera cada soma pra não acumular em cada ciclo
                somaq[i] = 0;
            }
        }
        x = 0;
        teste++;
    } while (teste < n + 1);
    return 0;
}