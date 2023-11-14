#include <stdio.h>
#include <stdlib.h>

void printf_array(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void bubblesort(int arr[], int len)
{
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = 0; j < len - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main()
{

  int arr[] = {2, 3, 4, 8, 0, 5, 7, 1, 3, 9};
  int len = sizeof(arr) / sizeof(arr[0]);

  printf("before: ");
  printf_array(arr, len);

  bubblesort(arr, len);

  printf("before: ");
  printf_array(arr, len);

  system("pause");
  return 0;
}