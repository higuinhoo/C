#include <stdio.h>

int main() {
    int codigo, total = 0;
    printf("Digite o código do pacote (-1 para encerrar): ");
    scanf("%d", &codigo);
    while (codigo != -1) {
        total = total + 1;
        printf("Digite o próximo código (-1 para encerrar): ");
        scanf("%d", &codigo);
    }
    printf("Total de pacotes registrados: %d\n", total);
    return 0;
}