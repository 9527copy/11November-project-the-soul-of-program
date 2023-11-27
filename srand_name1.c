#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main()
{
  char *surname[]={"zhang","li","wang","zhao","liu"};
  char *name[]={"hanhan","xiaohua","huahua","kashi","junjie"};

  srand(time(NULL));
  int surnameIndex=rand()%5;
  int nameIndex=rand()%5;

  char *combined_name=malloc(strlen(surname[surnameIndex])+strlen(name[nameIndex])+1);
  
  if(combined_name==NULL)
  {
    fprintf(stderr,"Memory allocation failed");
    return 1;
  }

  strcpy(combined_name,surname[surnameIndex]);
  strcat(combined_name,name[nameIndex]);

  printf("%s\n",combined_name);
  
  free(combined_name);

  system("pause");
  return 0;
}