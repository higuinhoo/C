#include <stdio.h>

int main () {
  
  int a=0, b=0;

  printf("Digite um Numero: ");
  scanf("%d", &a);

  printf("Digite outro numero: ");
  scanf("%d", &b);

  if (a == b) {
    printf("Os numeros sao iguais.\n");
  }else{
    if (a > b){
      printf("O maior numero e: %d\n", a);
      if (a % 2 == 0){
        printf("O numero %d e par", a);
      }else{
        printf("O numero %d e impar", a);
      }
      
    }else{
      printf("O maior numero e: %d\n", b);
      if(b % 2 == 0){
        printf("O numero %d e Par", b);
      }else{
        printf("O numero %d e impar", b);
      }
    }
  }
  
  return 0;
}