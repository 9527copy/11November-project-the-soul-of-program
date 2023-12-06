#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define MAX 1000

struct Student
{
  char m_Name[10];

  char m_Number[10];

  int m_Scores;
};

struct System
{
  int m_Size;

  struct Student students[MAX];
};

void login()
{
  int i;
  char username[10];//="yujiedeng";
  char password[10];//="123456";

  printf("请输入用户名：\n");
  scanf("%s",username);

  printf("请输入用户密码：\n");
  scanf("%s",password);

  if(strcmp(username,"yujiedeng")==0&&strcmp(password,"123456")==0)
  {
    printf("loading");
    for(i=0;i<6;i++)
    {
      Sleep(300);
      printf(".");
    }

    system("pause");
    system("cls");
  }
  else{
    printf("用户名或密码错误！\n");
  }
}

void showMenu()
{
  printf("\t学生成绩管理系统\t\n");
  printf("-----------------------\n");
  printf("| 1.录入学生成绩.      |\n");
  printf("| 2.显示学生成绩.      |\n");
  printf("| 3.查询学生成绩.      |\n");
  printf("| 4.退出.              |\n");
  printf("-----------------------\n");
}

void addStudent(struct System *sysstudent)
{
  char name[10];
  printf("请输入学生姓名：");
  scanf("%s",name);
  strcpy(sysstudent->students[sysstudent->m_Size].m_Name,name);
  
  char number[10];
  printf("请输入学生学号：");
  scanf("%s",number);
  strcpy(sysstudent->students[sysstudent->m_Size].m_Number,number);

  int scores;
  printf("请输入学生的成绩：");
  scanf("%d",&scores);
  sysstudent->students[sysstudent->m_Size].m_Scores=scores;

  sysstudent->m_Size++;
  printf("录入成功！\n");

  system("pause");
  system("cls");
}

void showStudent(struct System *sysstudent)
{
  int n=sysstudent->m_Size,i;
  for(i=0;i<=n;i++)
  {
    printf("学号:%s\t姓名:%s\t成绩:%d\n",sysstudent->students[i].m_Number,sysstudent->students[i].m_Name,sysstudent->students[i].m_Scores);
  }

  system("pause");
  system("cls");
}

int inExist(struct System *sysstudent,char name[10])
{
  int i;
  for(i=0;i<=sysstudent->m_Size;i++)
  {
    if(strcmp(name,sysstudent->students->m_Name)==0)
    {
      return i;
    }
  }
  
  return -1;
}

void findStudent(struct System *sysstudent)
{
  char name[10];
  printf("请输入你要查询的学生的姓名：");
  scanf("%s",name);
  fflush(stdout);

  int ret=inExist(sysstudent,name);
  if(ret>=0)
  {
    printf("学号:%s\t姓名:%s\t成绩:%d\n",sysstudent->students[ret].m_Number,sysstudent->students[ret].m_Name,sysstudent->students[ret].m_Scores);
  }
  else
  {
    printf("此学生不存在！\n");
  }

  system("pause");
  system("cls");
}

int main()
{
  login();

  int flag=1;
  while(flag)
  {
    showMenu();

    int select;
    printf("请输入你的选择：");
    scanf("%d",&select);
    fflush(stdout);

    struct System sysstudent;
    sysstudent.m_Size=0;

    switch (select)
    {
    case 1:
      addStudent(&sysstudent);
      break;
    case 2:
      showStudent(&sysstudent);
      break;
    case 3:
      findStudent(&sysstudent);
      break;
    case 4:
      return 0;
    }
  }
  
  system("pause");
  return 0;
}