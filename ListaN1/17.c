#include <stdio.h>

int main() {
    int opcao;
    double saldo = 1000.0, valor;
    do {
        printf("\nMenu Caixa Eletronico:\n");
        printf("1 - Saque\n");
        printf("2 - Saldo\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida.\n");
            return 0;
        }

        switch (opcao) {
            case 1:
                printf("Digite o valor do saque: ");
                if (scanf("%lf", &valor) != 1) {
                    printf("Valor invalido.\n");
                    break;
                }
                if (valor > 0 && valor <= saldo) {
                    saldo = saldo - valor;
                    printf("Saque realizado! Novo saldo: %.2lf\n", saldo);
                } else {
                    printf("Valor invalido ou saldo insuficiente.\n");
                }
                break;
            case 2:
                printf("Saldo atual: %.2lf\n", saldo);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
    return 0;
}