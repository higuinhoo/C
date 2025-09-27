#include <stdio.h>

int main() {
    printf("====================\n C A L C U L A T U D O \n====================\n");
    int n1, n2;
    float resultado;

    printf("Digite o Primeiro Numero: \n");
    scanf("%d", &n1);
    printf("Digite o Segundo Numero: \n");
    scanf("%d", &n2);

    resultado = n1 + n2;
    printf("Adicao: %.2f\n", resultado);

    resultado = n1 - n2;
    printf("Subtracao: %.2f\n", resultado);

    resultado = n1 * n2;
    printf("Multiplicacao: %.2f\n", resultado);

    resultado = (float)n1 / n2;
    printf("Divisao: %.2f\n", resultado);

    int modulo = n1 % n2;
    printf("Modulo: %d\n", modulo);

    return 0;
  }