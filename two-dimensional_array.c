#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[3][3], i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      arr[i][j] = 3 * i + j + 1;
    }
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if(i==1||j==1)
      {
        printf("%4d", arr[i][j]);
      }
      else
      {
        printf("%4c",' ');
      }
      
    }
    printf("\n");
  }

  system("pause");
  return 0;
}