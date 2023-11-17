#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int i,count=0;//,flag=0;
  char str[81];

  printf("请输入一句英文(以空格开始)：\n");
  gets(str);

  for(i=0;i<strlen(str);i++)
  {
    if(str[i]==' '&&(str[i+1]>='A'&&str[i+1]<='z'))
    {
      count++;
    }
  }

  printf("%d",count);

  system("pause");
  return 0;
}