#include <stdio.h>

int main() {
    int numero, soma = 0;
    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
        soma = soma + numero;
        printf("Soma acumulada: %d\n", soma);
    } while (numero != 0);
    printf("Encerrado. Soma final: %d\n", soma);
    return 0;
}