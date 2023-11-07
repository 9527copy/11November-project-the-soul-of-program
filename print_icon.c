#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2 - i; j++)
    {
      printf(" ");
    }

    for (j = 0; j < i + 1; j++)//j<i+1等价于j<=i
    {
      printf("*");
    }
    printf("\n");
  }

  system("pause");
  return 0;
}