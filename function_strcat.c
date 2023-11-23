#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char str1[50],str2[10];
  int i;

  printf("请输入第一个字符串：\n");
  gets(str1);
  printf("请输入第二个字符串：\n");
  gets(str2);

  for(i=strlen(str1)-1;i<strlen(str2)+strlen(str1)-2;i++)
  {
    str1[i]=str2[i-strlen(str1)+1];
  }

  str1[strlen(str2)+strlen(str1)-2]='\0';

  printf("连接后的字符串为：\n");
  
  puts(str1);

  system("pause");
  return 0;
}