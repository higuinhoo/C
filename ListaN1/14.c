#include <stdio.h>

int main() {
    int soma = 0, idade;
    for (int i = 1; i <= 30; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        soma = soma + idade;
    }
    double media = soma / 30.0;
    printf("Média das idades: %.2f\n", media);
    return 0;
}