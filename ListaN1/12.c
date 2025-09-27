#include <stdio.h>

int main(){
  int n1, n2;
  char op;

  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);

  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  printf("Digite a operacao (+, -, *, /): ");
  scanf(" %c", &op);

  switch(op){
    case '+':
      printf("Resultado: %d\n", n1 + n2);
      break;
    case '-':
      printf("Resultado: %d\n", n1 - n2);
      break;
    case '*':
      printf("Resultado: %d\n", n1 * n2);
      break;
    case '/':
      if(n2 != 0){
        printf("Resultado: %.2f\n", (float)n1 / n2);
      }else{
        printf("Erro: Divisao por zero nao e permitida.\n");
      }
      break;
    default:
      printf("Operacao invalida!\n");
      break;
  }

  return 0;
}
