#include <stdio.h>

int main(){

  int vendas, preco = 200;
  float bonus, total_b, total;

 printf("--------------------\nBONUS PRODUTIVIDADE\n------------------\n");

 printf("Quantas vendas: ");
 scanf("%d", &vendas);
 bonus = (vendas * preco) * 0.10;
 total_b = (vendas * preco) + bonus;
 total = (vendas * preco);
 if(vendas >= 10000){

  printf("Voce recebera um bonus de: R$ %.2f total de R$ %.2f\n", bonus, total_b);
 } else{
  printf("Você receberá um total de R$ %2.f\n", total);
 }
  return 0;
}