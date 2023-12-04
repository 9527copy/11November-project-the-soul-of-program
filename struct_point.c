#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
  int number;

  char *name;

  int score[4];
};

int main()
{
  struct Student student;
  struct Student *p;

  p=&student;

  student.name="张三";

  printf("%s\n",p->name);
  system("pause");
  return 0;
}