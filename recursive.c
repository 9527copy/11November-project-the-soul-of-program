#include <stdio.h>
#include <stdlib.h>
//函数的递归调用
int fun(int num)
{
  if (num == 1)
  {
    return 1;
  }
  else
  {
    return fun(num - 1) * num;
  }
}

int main()
{
  int ret = fun(5);

  printf("5的阶乘为：%d\n", ret);

  system("pause");
  return 0;
}