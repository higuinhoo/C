#include <stdio.h>

int main(){

  printf("---------------------\nBILHERERIA CINEMA\n--------------------\n");

  int idade;

  printf("Sua idade: ");
  scanf("%d", &idade);

  if(idade < 18 || idade > 60){
    printf("Voce TEM direito a MEIA ENTRADA\n");
  } else{
    printf("Voce NAO tem direito a MEIA ENTRADA\n");
  }
  return 0;
}