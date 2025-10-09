/* Elabore um programa onde o usuário informará 5 notas, após receber as notas, mas mesmas serão apresentadas em ordem inversa a informada */

#include <stdio.h>

int main(){
  float notas [5];
  int i;
  
  for(i=0; i<5; i++){
   printf("Informe o valor da nota %d: ", i+1);
   scanf("%f", &notas[i]);
  }

  for(i=4; i>=0; i--){
  printf("Notas %d: %.1f\n", i+1, notas[i]);

}
  
  return 0;
}