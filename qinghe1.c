#include <stdio.h>
#include <stdlib.h>
//差不多太慢了
int main()
{
  int i, j, k, l, sumyA = 0, sumyB = 0;

  for (i = 1; i < 3000; i++)
  {
    for (j = 1; j < 3000; j++)
    {
      if (i != j)
      {
        for (k = 1; k < i; k++)
        {
          if (i % k == 0)
          {
            sumyA += k;
          }
        }

        if (sumyA == j)
        {
          for (l = 1; l < j; l++)
          {
            if (j % l == 0)
            {
              sumyB += l;
            }
          }
          if (sumyB == i)
          {
            printf("(%d,%d)\n", i, j);
          }
        }
        sumyA = 0;
        sumyB = 0;
      }
    }
  }

  system("pause");
  return 0;
}