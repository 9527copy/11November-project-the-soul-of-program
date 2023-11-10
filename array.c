#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
  int arr[20], i;
  srand((unsigned)time(NULL));

  for (i = 0; i < 20; i++)
  {
    arr[i] = rand() % 50 + 50;
  }

  for (i = 0; i < 20; i++)
  {
    printf("%4d", arr[i]);
  }

  printf("\n");

  printf("%d\n",&arr[1]);//数组的地址
  printf("%d",arr);

  system("pause");
  return 0;
}