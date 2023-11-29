#include<stdio.h>
#include<stdlib.h>
//找到3000之内的亲和数
//11.29未完成
int main()
{
  int i,j,k,l,sumyA=0,sumyB=0;

  for(i=1;i<3000;i++)
  {
    for(j=1;j<3000;j++)
    {                  
      for(k=1;k<i;k++)
      {
        if(i%k==0)
        {
          sumyA+=k;
        }
      }

      for(l=1;l<j;l++)
      {
        if(j%l==0)
        {
          sumyB+=l;
        }
      }

      if(i==sumyB&&j==sumyA)
      {
        printf("(%d,%d)\n",i,j);
      }
    }
  }

  system("pause");
  return 0;
}