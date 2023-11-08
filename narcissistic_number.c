#include<stdio.h>
#include<stdlib.h>

int main()
{
  for(int i=100;i<1000;i++)
  {
    int g,s,b;

    g=i%10;
    s=i/10%10;
    b=i/10/10%10;

    if(i==g*g*g+s*s*s+b*b*b)
    {
      printf("%d ",i);
    }
    
  }

  system("pause");
  return 0;
}