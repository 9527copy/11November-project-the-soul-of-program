#include<stdio.h>
#include<stdlib.h>

struct Student
{
  int number;

  float scores;

  struct Student *next;//设置下一个表的起始地址
};

int main()
{
  struct Student s1,s2,s3,*p,*head;

  s1.number=1,s1.scores=90.00;
  s2.number=2,s2.scores=80.00;
  s3.number=3,s3.scores=70.00;

  head=&s1;//将表进行链接
  s1.next=&s2;
  s2.next=&s3;
  s3.next=NULL;
  p=head;

  do
  {
    printf("%d\t%f\n",p->number,p->scores);

    p=p->next;
  } while (p!=NULL);
  
  system("pause");
  return 0;
}