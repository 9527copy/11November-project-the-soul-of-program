//验证任一充分大的偶数，可以用两个素数之和表示。例如：4 = 2 + 2，6 = 3 + 3，98 = 19 + 79。
#include<stdio.h>
#include<stdlib.h>

int flag(int num)//函数判断一个数是否为素数
{
  for(int i=2;i<=num;i++)//需要从2开始
  {
    if(num%i==0)
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
}

int main()
{
  int i,m,n,flag1=0,flag2=0;

  for(i=4;i<100;i+=2)
  {
    for(m=1;m<100;m++)
    {
      for(n=i-m;n<100;n++)
      {
        flag1=flag(m);
        flag2=flag(n);
        if(flag1*flag2!=0)
        {
          printf("验证了哥德巴赫猜想\n");
        }
      }
    }
  }
  // int num1=8;
  // int ret=flag(num1);
  // if(ret==1)
  // {
  //   printf("%d是一个素数",num1);
  // }
  // else
  // {
  //   printf("%d不是一个素数",num1);
  // }
  system("pause");
  return 0;
}