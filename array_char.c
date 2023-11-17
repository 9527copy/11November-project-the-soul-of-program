#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//strcpy//strcmp//strcat//strlen
int main()
{
  char str[12]="holle world";//长度与8进制有关
  char c[13];
  strcpy(c," nihaoshijie");//只比较了前11位

  if(strcmp(str,c)<0)
  {
    printf("在str和c的比较中，c字符串（字符数组）的ASCLL码值较大,且为：");
    puts(str);
  }
  else
  {
    printf("str字符串的ASCLL码值较大\n");
  }

  printf("\n");

  printf("两者连起来是：");
  printf("%s\n",strcat(str,c));

  printf("\n");

  int num=strlen(strcat(str,c));
  printf("两个连成一句话的位数为：%d\n",num);
  
  system("pause");
  return 0;
}