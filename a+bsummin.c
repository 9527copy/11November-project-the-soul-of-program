#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,minsum;

  for(a=1;a<2698;a++)
  {
    if(2698%a==0)
    {
      b=2698/a;
      printf("%d ",a);
      printf("%d ",b);
      printf("\n");
    }
  }
  system("pause");
  return 0;
}
