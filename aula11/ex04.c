/* Desenvolva um programa onde o usuário informará 10 valores que serão armazenados em um vetor, posteriormente leia cada elemento do vetor, ao final apresente apenas a quantidade de pares e a quantidade de ímpares. */

#include <stdio.h>
#define TAM 10

int main(){
  int i, valores[TAM], pares=0, impares=0;

  for(i=0; i<TAM; i++){
    printf("Informe o valor %d: ", i+1);
    scanf("%d", &valores[i]);
  }

  for(i=0; i<TAM; i++){
    if(valores[i] % 2 == 0){
      pares++;
    } else {
      impares++;
    }
  }

  printf("Quantidade de pares: %d\n", pares);
  printf("Quantidade de impares: %d\n", impares);

  return 0;
}