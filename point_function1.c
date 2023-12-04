#include<stdio.h>
#include<stdlib.h>

//比较大小的函数输出最大最小值
int cmp_max(int x,int y,int z)
{
  if(x>y&&x>z)
  {
    return x;
  }
  
  if(y>x&&y>z)
  {
    return y;
  }
  
  if(z>x&&z>y)
  {
    return z;
  }
}

int cmp_min(int x,int y,int z)
{
  if(x<y&&x<z)
  {
    return x;
  }
  
  if(y<x&&y<z)
  {
    return y;
  }
  
  if(z<x&&z<y)
  {
    return z;
  }
}

void fun(int x,int y,int z,int (*p)(int,int,int))
{
  int ret=p(x,y,z);
  printf("%d",ret);
}

int main()
{
  int x,y,z,choice;
  
  printf("1.求出最大值\n");
  printf("2.求出最小值\n");
  printf("请输入你的选择：\n");
  scanf("%d",&choice);
  printf("请输入三个数: \n");
  scanf("%d %d %d",&x,&y,&z);

  if(choice==1)
  {
    fun(x,y,z,cmp_max);//直接调用同一函数增强函数的适用性
  }
  else if(choice==2)
  {
    fun(x,y,z,cmp_min);
  }

  system("pause");
  return 0;
  
}

