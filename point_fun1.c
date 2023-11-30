#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//太多重复的代码，用函数模块化解决
int main()
{
  int arr[3][4];
  int i, j, n, sum=0,s=0,su=0;
  float arravage;

  srand(time(NULL));

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      arr[i][j] = rand() % 40 + 60;
    }
  }

  printf("序号\t高数\t英语\tC语言\t物理\t总成绩\n");
  for (i = 0; i < 3; i++)
  {
    printf("%d",i+1);

    for(j=0;j<4;j++)
    {
      printf("\t%d",*(arr[i]+j));
      sum+=*(arr[i]+j);
    }
    s+=sum;
    printf("\t%d",sum);

    sum=0;
    
    printf("\n");
  }
  
  arravage=s*1.0/3;
  printf("总平均成绩为：%f\n",arravage);

  printf("请输入你要查找学生的序号：\n");
  scanf("%d",&n);
  printf("此学生的成绩为：\n");
  printf("高数\t英语\tC语言\t物理\t总分\t\n");
  for(j=0;j<4;j++)
  {
    printf("%d\t",*(arr[n-1]+j));
    su+=*(arr[n-1]+j);
  }

  printf("%d",su);

  system("pause");
  return 0;
}