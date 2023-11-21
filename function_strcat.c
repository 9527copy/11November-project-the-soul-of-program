#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char str1[50],str2[10];
  int i,len1,len2;

  printf("请输入第一个字符串：\n");
  gets(str1);
  printf("请输入第二个字符串：\n");
  gets(str2);

  for(i=0;i<50;i++)
  {
    while(str1[i]!='\0')
    {
      len1++;
    }
  }

  for(i=0;i<10;i++)
  {
    while(str2[i]!='\0')
    {
      len2++;
    }
  }

  for(i=0;i<len2;i++)
  {
    str1[len1++]=str2[i];
  }

  str1[len1]='\0';

  printf("连接后的字符串为：");
  
  puts(str1);

  system("pause");
  return 0;
}