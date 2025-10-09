/* Apresente um programa onde o usuário informará até 10 notas, ao final deverá ser apresentado a média das notas informadas, quantas "aprovadas" (acima de 7) e quantas "reprovadas" */

#include <stdio.h>
#define TAM 10

int main(){
  float notas[TAM], soma=0, media;
  int i, aprovadas=0, reprovadas=0;

  for(i=0; i<TAM; i++){
    printf("Informe a nota %d: ", i+1);
    scanf("%f", &notas[i]);
    soma += notas[i];
    if(notas[i] >= 7){
      aprovadas++;
    } else {
      reprovadas++;
    }
  }

  media = soma / TAM;

  printf("Media das notas: %.2f\n", media);
  printf("Quantidade de aprovadas: %d\n", aprovadas);
  printf("Quantidade de reprovadas: %d\n", reprovadas);

  return 0;
}