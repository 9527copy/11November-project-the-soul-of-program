#include <stdio.h>
#include<stdlib.h>

void main()
{
  char c;
  int count = 0;
  printf("input a line letter：\n");

  while ((c = getchar()) != '\n')
  {
    if (c >= 'A' && c <= 'Z')
    {
      count++;
    }
  }

  printf("count=%d\n", count);

  system("pause");
}