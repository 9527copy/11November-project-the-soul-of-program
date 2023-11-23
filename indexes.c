#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//输入一串字符，输出除字符以外的所有字符
int main()
{
  int i,key;
  char str[20];

  printf("请输入一串字符：\n");
  gets(str);

  i=0;
  while(i<20)
  {
    if(str[i]>=49&&str[i]<=57)
    {
      for(key=i;key<20;key++)
      {
        str[key]=str[key+1];
      }
    }
    else
    {
      i++;//索引到要操作的数
    }
  }

  printf("输出除字符以外的所有字符: \n");
  puts(str);

  system("pause");
  return 0;
}