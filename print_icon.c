#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, num;

  printf("请输入你要打印菱形的大小：");
  scanf("%d", &num);

  for (i = 0; i < num; i++)
  {
    for (j = 0; j < num - 1 - i; j++)
    {
      printf(" ");
    }

    for (j = 0; j < 2 * i + 1; j++) // j<i+1等价于j<=i
    {
      printf("*");
    }
    printf("\n");
  }

  for (i = 0; i < num - 1; i++)
  {
    for (j = 0; j < i + 1; j++)
    {
      printf(" ");
    }

    for (j = 0; j < 2 * (num - 2 - i) + 1; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  system("pause");
  return 0;
}