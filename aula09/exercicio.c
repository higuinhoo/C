#include <stdio.h>

int main(){
  int i = 0, j = 0, n = 0;
  i = 1;
  
  printf("Digite um numero: ");
  scanf("%d", &n);
  j = n;
  
  while (i <= n || j >= n)
    {
      if (i * j % 4 == 0){
          printf("%d %d M4\n", i , j);
          i++, j--;
          continue;
      } else if (i * j % 4 != 0){
          printf("%d %d\n", i , j);
          i++, j--;
          continue;
      }
    }
  return 0;
}
