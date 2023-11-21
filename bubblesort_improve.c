#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int arr[10], i, j, t, count = 0, flag = 0;

  srand(time(NULL));

  for (i = 0; i < 10; i++)
  {
    arr[i] = rand() % 60 + 40;
  }

  printf("before: ");
  for (i = 0; i < 10; i++)
  {
    printf("%4d", arr[i]);
  }
  printf("\n");

  for (i = 0; i < 10 - 1; i++)
  {
    flag=0;
    for (j = 0; j < 10 - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        t = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = t;
        flag = 1;//交换了命题为真
        count++;//记录交换了多少次（交换次数是否减少）
      }
    }
    if (flag == 0)
    {
      break;//没有交换命题为假，退出此层循环
    }
  }

  printf("after: ");
  for (i = 0; i < 10; i++)
  {
    printf("%4d", arr[i]);
  }
  printf("\n");

  printf("%d", count);

  system("pause");
  return 0;
}