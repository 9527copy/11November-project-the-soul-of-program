#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int i;
  char str[20];

  printf("请输入字符串：\n");
  gets(str);

  for(i=0;i<20;i++)
  {
    if(str[i]<=57&&str[i]>=49)
    {
      printf("%c",str[i]);
    }
  }

  system("pause");
  return 0;
}