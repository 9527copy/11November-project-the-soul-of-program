#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//语法char *p1=&a   a等价于*p1
void swap(char *p1,char *p2)//写一个swap_char函数
{
  int temp=*p1;
  *p1=*p2;
  *p2=temp;
}
//只交换了第一个  (strlen(str1)>strlen(str2)?strlen(str2):strlen(str1))为什么输出了这个？
int main()
{
  char str1[20]="china";
  char str2[20]="i am coming";

  char *point1=str1;
  char *point2=str2;
  for(int i=0;i<20;i++)
  {
    swap(&str1[i],&str2[i]);
  }

  puts(str1);
  puts(str2);

  system("pause");
  return 0;
}