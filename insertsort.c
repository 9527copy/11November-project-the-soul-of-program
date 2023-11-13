#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
  int i, j, key;

  for (i = 0; i < len; i++)
  {
    key = arr[i];
    j = i - 1;

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
  srand((unsigned)time(NULL));

  int arr[10];

  for (int i = 0; i < 10; i++)
  {
    arr[i] = rand() % 50 + 50;
  }

  int len = sizeof(arr) / sizeof(arr[0]);

  printf("before: ");
  print_array(arr, len);

  insertsort(arr, len);

  printf("after: ");
  print_array(arr, len);

  system("pause");
  return 0;
}