#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SUM_STUDENT 10
#define SUM_COURSE 3

int main()
{
  int arr[SUM_STUDENT][SUM_COURSE], i, j, sumscore = 0;

  srand(time(NULL));

  for (i = 0; i < SUM_STUDENT; i++)
  {
    for (j = 0; j < SUM_COURSE; j++)
    {
      arr[i][j] = rand() % 60 + 40;
    }
  }

  printf("C语言\t高数\t英语\t总分\n");
  for (i = 0; i < SUM_STUDENT; i++)
  {
    sumscore = 0;
    for (j = 0; j < SUM_COURSE; j++)
    {
      printf("%6d", arr[i][j]);
      sumscore += arr[i][j];
    }
    printf("%6d", sumscore);
    printf("\n");
  }

  system("pause");
  return 0;
}