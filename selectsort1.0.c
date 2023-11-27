#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int i,j;
  char name[3][20],t[20];

  for(i=0;i<3;i++)
  {
    printf("请输入第%d个人的姓名：\n",i+1);
    gets(name[i]);
  }

  for(i=0;i<3-1;i++)//i表示比较数
  {
    for(j=i+1;j<3;j++)//j表示被比较数
    {
      if(strcmp(name[i],name[j])>0)
      {
        strcpy(t,name[i]);
        strcpy(name[i],name[j]);
        strcpy(name[j],t);
      }
    }
  }

  printf("排序后: \n");
  for(i=0;i<3;i++)
  {
    puts(name[i]);
  }

  system("pause");
  return 0;
}