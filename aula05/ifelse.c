#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a < b){
        printf("A e menor que B\n");
            }else if (a > b){
                    printf("A e maior que B\n");
                            }else{
                                printf("A e igual a B\n");
    }

    int maior = (a >= b) ? a : b;

    if (maior % 2 == 0){
        printf("O maior numero (%d) e par\n", maior);
                        }else{
                            printf("O maior numero (%d) e ímpar\n", maior);
                            }

    return 0;
}