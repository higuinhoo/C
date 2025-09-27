#include <stdio.h>

int main(){
  int i = 0;

  for (i = 500; i >= 10; i-= 3){
    printf("%d\n", i);
  }
  return 0;
}