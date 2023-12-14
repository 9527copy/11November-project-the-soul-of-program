#include<stdio.h>
#include<stdlib.h>
//利用特征\0,console pointer move in the memory bank(内存条)
void my_strcat(char *dest,char *src)
{
  while(*dest!='\0')
  {
    dest++;
  }

  while(*src!='\0')
  {
    *dest=*src;

    dest++;
    src++;
  }

  *dest='\0';
}

int main()
{
  char str1[20];
  char str2[10];

  scanf("%s",str1);
  scanf("%s",str2);

  my_strcat(str1,str2);

  printf("%s",str1);

  system("pause");

  return 0;
}