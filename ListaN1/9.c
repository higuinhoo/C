#include <stdio.h>

int main(){

  float n1, n2, n3, media;
  char nome[50];

  printf("---------------------\nCALCULO DE MEDIA\n--------------------\n");

  printf("Nome do aluno: \n");
  scanf(" %[^\n]", nome);

  printf("Digite a primeira nota: ");
  scanf("%f", &n1);

  printf("Digite a segunda nota: ");
  scanf("%f", &n2);

  printf("Digite a terceira nota: ");
  scanf("%f", &n3);

  media = (n1 + n2 + n3) / 3;

  if(media >= 7.0){
    printf("A media do aluno %s e: %.2f\n", nome, media);
    printf("Aluno APROVADO!\n");
  } else{
    printf("A media do aluno %s e: %.2f\n", nome, media);
    printf("Aluno REPROVADO!\n");
  }
  return 0;
}