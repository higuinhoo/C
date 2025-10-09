#include <stdio.h>
#define TAM 100

int main(){
  float notas[TAM], soma = 0, media;
  int i = 0;

  for (i = 0; i < TAM; i++){
    printf("Informe a nota %d: ", i + 1);
    scanf("%f", &notas[i]);
  }

  for(i = 0 ; i < TAM; i++){
    printf("Nota %d: %.2f\n", i + 1, notas[i]);
  }
  
  return 0;
}