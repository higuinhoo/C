#include <stdio.h>

int main(){
  
  float saldo, valorCompra;
  
  printf("---------------------\nBANCO\n--------------------\n");

  printf("Vamos verificar se você pode realizar a compra?\n");


  printf("Digite seu saldo: R$ ");
  scanf("%f", &saldo);

  printf("Digite o valor da compra: R$ ");
  scanf("%f", &valorCompra);

  if(saldo >= valorCompra){
    printf("--------------------\nCompra autorizada!\n-------------------");
  } else{
    printf("--------------------\nSaldo insuficiente!\n-------------------");
  }

  return 0;
}