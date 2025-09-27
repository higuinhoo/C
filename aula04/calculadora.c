#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, resultado; /* entradas e resultado */
    char operacao;               /* operação escolhida */
    int status;                  /* retorno do scanf */

    printf("--------------------\n-- Calculadora --\n--------------------\n");

    printf("Informe N1: ");
    status = scanf("%f", &num1);
    if (status != 1) {
        printf("Erro: Entrada invalida!\n");
        return 1;
    }

    /* limpa buffer */
    while (getchar() != '\n');

    printf("Informe OP: ");
    operacao = getchar();

    printf("Informe N2: ");
    status = scanf("%f", &num2);
    if (status != 1) {
        printf("Erro: Entrada invalida!\n");
        return 1;
    }

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("\nErro: Divisao por zero nao permitida!\n");
                return 1;
            }
            resultado = num1 / num2;
            break;
        default:
            printf("\nErro: Operacao invalida! Use apenas +, -, * ou /\n");
            return 1;
    }

    printf("\n--------------------\nResultado: %.2f\n--------------------\n", resultado);
    return 0;
}