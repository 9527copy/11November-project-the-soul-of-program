#include<stdio.h>
#include<stdlib.h>

int fun(int n,int m)
{
  if(n==1)
  {
    return 1;
  }
  else
  {
    return fun(n-m,m)*n;
  }
}

int main()
{
  int a=5;
  int b=2;
  int ret=fun(a,b);

  printf("%d",ret);

  system("pause");
  return 0;
}