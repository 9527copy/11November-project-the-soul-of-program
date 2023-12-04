#include<stdio.h>
#include<stdlib.h>
//利用函数指针
void test01()
{
  printf("hello world\n");
}

int main()
{
  void (*p)()=test01;//返回值类型和形参数据类型，定义一个指针p指向函数test01

  p();

  system("pause");
  return 0;
}