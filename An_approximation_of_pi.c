#include<stdio.h>
#include<stdlib.h>

int main()
{
  float pi=0.0;
  int i=1;

  while(1.0/(2*i+1)>1.0/12)
  {
    pi+=1.0/(2*i-1)-1.0/(2*i+1);
    i++;
  }

  pi*=4.0;

  printf("pi的近视值为: %.3f",pi);

  system("pause");
  return 0;
}