#include <stdio.h>

int main(){
  char nome[50];
  float n1, n2, n3, media;

  printf("---------------------\nCALCULO DE MEDIA\n--------------------\n");
  
  printf("Nome do aluno: \n");
  scanf(" %[^\n]", nome);

  printf("Digite a primeira nota: \n");
  scanf("%f", &n1);

  printf("Digite a segunda nota: \n");
  scanf("%f", &n2);

  printf("Digite a terceira nota: \n");
  scanf("%f", &n3);

  media = (n1 + n2 + n3) / 3;

  printf("A media do aluno %s e: %.2f\n", nome, media);

  return 0;
}