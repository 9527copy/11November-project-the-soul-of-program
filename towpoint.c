#include<stdio.h>
#include<stdlib.h>

int mian()
{
  int a[3][3]={1,2,3,4,5,6,7,8,9};
  int (*p)[3];

  p=a;

  for(int i=0;i<3;i++)
  {
    printf("%d,%d,%d",**p++);
  }

  system("pause");
  return 0;
}