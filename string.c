#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

//有关str的函数
//1赋值strcpy
//2比较strcmp
//3连接strcat
//4计算长度strlen

// 定义随机字符数组
char random_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

// 生成随机字符
char get_random_char() 
{
  int index;
  srand(time(NULL)); // 初始化随机数种子
  index = rand() % (sizeof(random_chars) - 1); // 随机生成一个字符索引
  return random_chars[index];
}

int main() 
{
  int i;

  for(i=0;i<3;i++)
  {
    printf("%4c",get_random_char());//只能输出一样的
  }

  system("pause");
  return 0;
}