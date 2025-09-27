#include <stdio.h>

int main(){

  printf("--------------------\nAGENDAMENTO DE CONSULTAS\n--------------------\n");

  char nome[50];
  int idade;
  float altura;

  printf("Nome do paciente: \n");
  scanf("%s", nome);
  
  printf("Idade do paciente: \n");
  scanf("%d", &idade);

  printf("Altura do paciente: \n");
  scanf("%f", &altura);

  printf("Paciente %s, possui %d anos e altura de %.2fm", nome, idade, altura);

  return 0;

}