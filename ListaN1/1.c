#include <stdio.h>

int main(){

  printf("--------------------\nCADASTRA MEDICAMENTO\n--------------------\n");
  
  char nome[255];
  int codigo;
  float preco;

  printf("Nome do medicamento: \n");
  scanf("%s", nome);
  
  printf("Codigo do medicamento: \n");
  scanf("%d", &codigo);
  
  printf("Preco do medicamento: R$ ");
  scanf("%f", &preco);

  printf("Medicamento cadastrado com sucesso!\n");
  printf("Nome: %s\nCodigo: %d\nPreco: R$ %.2f\n", nome, codigo, preco);
  
  
  return 0;
}