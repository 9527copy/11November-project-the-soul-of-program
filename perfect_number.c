#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i, j, sum;
  printf("1000以内的完数有：\n");
  for (i = 1; i <= 1000; i++)
  {
    sum = 0;
    for (j = 1; j < i; j++)
    {
      if (i % j == 0)
      {
        sum += j;
      }
    }
    if (sum == i)
    {
      printf("%d ", i);
    }
  }
  printf("\n");
  system("pause");
  return 0;
}
