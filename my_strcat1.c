#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char str1[20]="hello,";
  char str2[10]="world!";

  size_t length1=strlen(str1);
  size_t length2=strlen(str2);
  size_t i;

  for(i=0;i<length2;i++)
  {
    str1[length1+i]=str2[i];//空的可以赋值
  }

  str1[length1+length2]='\0';//由于有一个\0

  puts(str1);

  system("pause");
  return 0;
}