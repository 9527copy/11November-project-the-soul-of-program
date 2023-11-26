#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void swap(char *p1,char *p2)
{
  int temp=*p1;
  *p1=*p2;
  *p2=temp;
}

int main()
{
  char str[3][10],str1[10][20];
  for(int i=0;i<3;i++)
  {
    printf("请输入第%d个人的姓名:\n",i+1);
    gets(str[i]);
  }

  for(int i=0;i<3-1;i++)
  {
    int m=i;
    for(int j=i;j<3;j++)
    {
      if(strcmp(str[m],str[j])>0)
      {
        m=j;//优化但没有原版节约资源
      }
    }
    //交换字符串的方法
    for(int k=0;k<10;k++)
    {
      swap(&str[i][k],&str[m][k]);
    }
  }

  printf("  \n");
  printf("根据首字母经行排序后：\n");
  for(int i=0;i<3;i++)
  {
    puts(str[i]);
  }

  system("pause");
  return 0;
}