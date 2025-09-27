#include <stdio.h>

int main() {
    int i = 0 , n = 0;
    i = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    while (i <= n) {
      if (i % 2 == 0) {
        printf("%d PAR\n", i);
      }else{
        printf("%d IMPAR\n", i);
      }    
      i++;
    }
    return 0;
}