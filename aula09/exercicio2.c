#include <stdio.h>

int main()
{
  int i = 0, j = 0, n = 0;
  i = 1;
  
  printf("Digite um numero: ");
  scanf("%d", &n);
  j = n;
  
  while (i <= n || j >= n)
    {
      if (j % 10 == 0){
          printf("%d\tM10\n", i);
          i++, j--;
          continue;
      } else if(j % 5 == 0){
          printf("%d\tM5\n", i);
          i++, j--;
          continue;
      } else {
          printf("%d\t%d\n", i, j);
          i++, j--;
          continue;
      }
    }
  return 0;
}