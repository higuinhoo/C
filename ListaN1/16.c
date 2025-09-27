#include <stdio.h>

int main() {
    int senha;
    printf("Digite a senha: ");
    scanf("%d", &senha);
    while (senha != 12345) {
        printf("Senha incorreta. Tente novamente: ");
        scanf("%d", &senha);
    }
    printf("Acesso liberado!\n");
    return 0;
}
