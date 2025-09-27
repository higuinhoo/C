#include <stdio.h>

int main() {
    int i = 0;
    int n = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++){
      if (i % 2 == 0) {
        printf("%d PAR\n", i);
      }else{
        printf("%d IMPAR\n", i);
      }
    }
    return 0;
}