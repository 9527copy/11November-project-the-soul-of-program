#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//不能达到完全随机但是其中的//指针类型的数组//值得学习
//malloc函数开辟空间并返回各个空间的地址，可以在定义指针类型的数组时使用
int main()
{
  char surname[5][20]={"li","zhang","wang","liu","huang"};//若写成指针数组的形式会导致在strcat中未定义大小
  char *name[]={"huahua","difas","asdf","asdf","sdfff"};

  srand(time(NULL));
  int surnameIndex=rand()%5;
  int nameIndex=rand()%5;

  strcat(surname[surnameIndex],name[nameIndex]);//由地址得到内容，前实后虚

  printf("%s\n",surname[surnameIndex]);

  system("pause");
  return 0;
}