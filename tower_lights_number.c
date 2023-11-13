#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, sum, temp;

  for (i = 0; i < 765; i++)
  {
    sum = 0;
    temp = i; //为了不改变原来的值  初始值

    for (j = 0; j < 8; j++)
    {
      sum += temp;
      temp /= 2;
    }

    if (sum == 765)
    {
      printf("塔底的灯数为：%d", i);
      break;
    }
  }

  printf("\n");
  system("pause");
  return 0;
}