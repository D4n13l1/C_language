#include <stdio.h>
#include <locale.h>
#include <string.h>
#define TAM 10
double saldo_total = 0, temps = 0, tempd = 0;
int main(void)
{
    void sacar(void);
    void depositar(void);
    void saldo(void);
    char senha[10];
    void extrato(void);
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    char operacao[TAM];
    printf("BEM VINDO AO BANCO DANAMERICANO!!\n");
    printf("Digite seu nome sem acentos: ");
    // scanf("")
    printf("Para realizar um deposito digite \"deposito\"\nPara realizar um saque digite \"saque\"\n");
    printf("Para ver seu saldo digite \"saldo\"\nPara ver o extrato digite \"extrato\"\n");
    printf("Para sair, digite \"sair\"\n");
    do
    {
        scanf("%s", operacao);
        if (strcmp(operacao, "saque") == 0)
        {
            printf("Digite sua senha: ");
            scanf("%s", senha);
            if (strcmp(senha, "2003") == 0)
            {
                printf("A taxa de saque eh de 1,2%% o valor do saque\n");
                sacar();
                printf("Digite outra operacao\n");
            }
            else
                printf("Senha invalida\n");
        }
        else if (strcmp(operacao, "deposito") == 0)
        {
            depositar();
            printf("Digite outra operacao\n");
        }
        else if (strcmp(operacao, "saldo") == 0)
        {
            saldo();
            printf("Digite outra operacao\n");
        }
        else if (strcmp(operacao, "extrato") == 0)
        {
            extrato();
            printf("Digite outra operacao\n");
        }
        else if (strcmp(operacao, "saldo") == 0)
        {
            saldo();
            printf("Digite outra operacao\n");
        }
        else if(strcmp(operacao, "sair") == 0)
            printf("\n!!Ate breve!!\n");
        else
        {
            printf("ENTRADA INVALIDA!!\n");
            printf("Tente escrever uma operacao valida\n");
        }
    } while (strcmp(operacao, "sair") != 0);
    printf("\nObrigado por usar o DANAMERICANO\n");
    system("pause");
    return 0;
}
void sacar(void)
{
    double saque;
    printf("Digite o valor a ser sacado: ");
    scanf("%lf", &saque);
    double taxa = 0.012 * saque;
    if (saque <= 0)
        printf("Valor invalido\n");
    else if ((saque + taxa) > saldo_total)
        printf("Saque indisponivel!\n");
    else
    {
        saldo_total -= (saque + taxa);
        printf("Voce sacou R$ %.2lf\nAgora seu saldo eh de: R$ %.2lf\n", saque, saldo_total);
        printf("\nA taxa foi de R$ %.2lf\n", taxa);
        temps += saque;
    }
    taxa = 0;
}
void depositar(void)
{
    double deposito;
    printf("Digite o valor a ser depositado: ");
    scanf("%lf", &deposito);
    if (deposito <= 0)
        printf("Valor invalido\n");
    else
    {
        saldo_total += deposito;
        printf("Voce depositou R$ %.2lf\nAgora seu saldo eh R$ %.2lf\n", deposito, saldo_total);
        tempd += deposito;
    }
}
void saldo(void)
{
    printf("Seu saldo eh R$ %.2lf\n", saldo_total);
}
void extrato(void)
{
    printf("R$ %.2lf sacados no total\n", temps);
    printf("R$ %.2lf depositados no total\n", tempd);
}