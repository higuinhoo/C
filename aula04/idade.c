#include <stdio.h>

int main() {
  int idade = 0;
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("A idade em 10 anos sera: %d\n", idade + 10);
  return 0;
}