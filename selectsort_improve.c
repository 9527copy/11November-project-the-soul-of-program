#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int i,j,m;
  char name[3][20],t[20];

  for(i=0;i<3;i++)
  {
    printf("请输入第%d个人的姓名：\n",i+1);
    gets(name[i]);
  }

  for(i=0;i<3-1;i++)
  {
    m=i;
    for(j=i+1;j<3;j++)
    {
      if(strcmp(name[m],name[j])>0)
      {
        m=j;
      }
    }
//选出最小的数和第一个数进行交换
    strcpy(t,name[i]);
    strcpy(name[i],name[m]);
    strcpy(name[m],t);
  }

  printf("排序后: \n");
  for(i=0;i<3;i++)
  {
    puts(name[i]);
  }

  system("pause");
  return 0;
}