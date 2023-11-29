#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//输出三名同学的三门课程的总平均成绩
//11.29未完成
float average(int *p,int len)
{
  int sum=0;

  for(int i=0;i<len;i++)
  {
    sum+=*(p+i);
  }
  
  return sum/len;
}

void research(int *p,int len)
{
  int n;
  printf("input students number:\n");
  scanf("%d",&n);
  if(n<=len)
  {
    printf("Student %d score is %d,%d,%d\n",n,*((p+n)+1),*((p+n)+2),*((p+n)+3));
  }
  else
  {
    printf("No this number!\n");
  }
}

int main()
{
  int arr[3][3];

  srand(time(NULL));

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      arr[i][j]=rand()%40+60;
    }
  }

  int *p=&arr[0][0];
  int len=sizeof(arr)/sizeof(arr[0][0]);

  printf("The student average is %d\n",average(p,len));
  research(p,len);

  system("pasue");
  return 0;
}