#include <stdio.h>
#include <stdlib.h>
//已知a>b>c>0,a、b、c为整数，且a+b+c<100,求满足1/a2+1/b2=1/c2的a、b、c共有多少组？

int main()
{
  int a, b, c;

  for (c = 1; c < 100; c++)
  {
    for (b = c + 1; b < 100; b++)
    {
      for (a = b + 1; a < 100; a++)
      {
        if (a + b + c < 100)
        {
          if (b * b * c * c + a * a * c * c == a * a * b * b)
          {
            printf("%d %d %d\n", a, b, c);
          }
        }
      }
    }
  }

  system("pause");
  return 0;
}