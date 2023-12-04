#include<stdio.h>
#include<stdlib.h>

struct Student
{
  int number;

  char *name;

  int score;
};

int main()
{
  struct Student students;

  students.number=1;

  students.name="张三";//const char *string ；string=“ ”；

  students.score=80;

  printf("No.%d\tname:%s\tscore:%d\n",students.number,students.name,students.score);

  system("pause");
  return 0;
}