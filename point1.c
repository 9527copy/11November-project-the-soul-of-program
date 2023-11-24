#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//利用指针来进行按首字母大小排序
//给数组排序_>给人名排序
void swap(int *p1,int *p2)
{
  int temp=*p1;
  *p1=*p2;
  *p2=temp;
}
//int*p=&a *p代表整形变量a
int main()
{
  int i,j,m,t,arr[10];
  int *point1;
  int *point2;

  srand(time(NULL));
  for(i=0;i<10;i++)
  {
    arr[i]=rand()%40+60;
  }

  for(i=0;i<10-1;i++)
  {
    for(j=i+1;j<10;j++)
    {
      if(arr[i]>arr[j])
      {
        // int t=arr[i];
        // arr[i]=arr[j];
        // arr[j]=t;
        
        //为什么没有改变数组中元素的值？值传递，指针传递
        point1=&arr[i];
        point2=&arr[j];
        swap(point1,point2);
      }
    }
  }

  for(i=0;i<10;i++)
  {
    printf("%d ",arr[i]);
  }

  system("pause");
  return 0;
}