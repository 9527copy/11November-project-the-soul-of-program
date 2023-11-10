#include <stdio.h>
#include <stdlib.h>
//当程序运行不了时回顾一遍代码找出细节的错误
void print_array(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void insertsort(int arr[], int len)
{
  for (int i = 1; i < len; i++)
  {
    int key = arr[i];//记录要交换的数
    int j = i - 1;//记录开始时前一个数的位置

    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }
}

int main()
{
  int arr[] = {2, 4, 8, 0, 5, 7, 1, 3, 9};
  int len = sizeof(arr) / sizeof(arr[0]);

  print_array(arr, len);

  insertsort(arr, len);

  print_array(arr, len);

  system("pause");
  return 0;
}