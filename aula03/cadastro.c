#include <stdio.h>

int main() {

  
  printf("----------------------------------------\n\tC A D A S T R O\t\n----------------------------------------\n");
  printf("Nome: \nIdade: \nStatus(a ou i): \nAltura: \nE-mail: \nSalario (coin): \n----------------------------------------\n");


  char nome[255];
  int idade = 0;
  char status[2];
  float altura;
  char email[255];
  double salario;
  
  printf("Digite seu Nome: ");
  scanf("%s", &nome);
  
  printf("Digite sua Idade: ");
  scanf("%d", &idade);
  
  printf("Digite seu Status (a ou i): ");
  scanf("%s", &status);
  
  printf("Digite sua Altura: ");
  scanf("%f", &altura);
  
  printf("Digite seu e-mail: ");
  scanf("%s", &email);
  
  printf("Digite Seu Salario: ");
  scanf("%lf", &salario);
  
  printf("----------------------------------------\n");
  printf("Nome Informado: %s\n", nome);
  printf("Idade: %d\n", idade);
  printf("Status: %s\n", status);
  printf("Altura: %.2f\n", altura);
  printf("E-mail: %s\n", email);
  printf("Salario: %.2lf\n", salario);
  printf("----------------------------------------");


    return 0;
}
