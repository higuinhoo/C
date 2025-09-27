#include <stdio.h>

int main(){

  int op;

  printf("--------------------\nMENU DE OPCOES\n------------------\n");
  printf("1 - Pizza\n2 - Hamburguer\n3 - Salada\n4 - sair\n");
  scanf("%d", &op);

  switch(op){
    case 1:
      printf("Produto Selecionado: pizza\n");
      break;
    case 2:
      printf("Produto Selecionado: hamburguer\n");
      break;
    case 3:
      printf("Produto Selecionado: salada\n");
      break;
    case 4:
      printf("Saindo...\n");
      break;
    default:
      printf("Opcao invalida!\n");
      break;
  }

  return 0;
}


