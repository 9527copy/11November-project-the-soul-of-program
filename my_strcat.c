#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//p来索引 *p来操作内容
char *my_char(char *dest,const char *src)
{
  char *prc=dest;//。此时prc为数组的首地址

  //先移动到destination中\0的位置
  while(*prc!='\0')
  {
    prc++;//。prc为数组元素\0的地址
  }

  //将src复制到dest中
  while(*src!='\0')
  {
    *prc=*src;//。从dest的\0起始逐个赋值
    prc++;
    src++;
  }

  //dest末尾添加\0
  *prc='\0';//。此时的prc已经是数组末尾的元素（但是没有content内容）

  return dest;//。返回dest字符数组的首地址
}
//输出打印时都是根据首地址开始打印到最后\0结束，用地址对数组操作，再用首地址输出
int main()
{
  char str1[20]="liu";
  char str2[10]="shicheng";

  my_char(str1,str2);

  puts(str1);

  system("pause");
  return 0;
}