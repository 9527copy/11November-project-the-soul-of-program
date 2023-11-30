#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define STUDENT_NUM 3
#define PROJECT_NUM 4

struct Student
{
  int number;

  //char name[10];//可惜无法随机姓名

  int scores[PROJECT_NUM];
};

int random()
{
  srand(time(NULL));

  return rand()%40+60;
}

void show_scores()
{
  struct Student students[STUDENT_NUM];

  for(int i=0;i<STUDENT_NUM;i++)
  {
    for(int j=0;j<PROJECT_NUM;j++)
    {
      students[i].scores[j]=random();
    }
  }

  for(int i=0;i<STUDENT_NUM;i++)
  {
    students[i].number=i+1;
  }

}

void search()
{
  int n;
  printf("请输入学生的编号：\n");
  scanf("%d",&n);

  for (int i = 0; i < STUDENT_NUM; i++)
  {
  
  }
  
}

int main()
{
  show_scores();
  search();

  system("pause");
  return 0;
}
