#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int i, j;
  char str[3][20], key[20];

  printf("请输入三个人的姓名：\n");
  for (i = 0; i < 3; i++)
  {
    gets(str[i]);
  }

  for (i = 1; i < 3; i++)
  {
    strcpy(key, str[i]); // char key=str[i];
    j = i - 1;
    while (j >= 0 && strcmp(str[j], str[j + 1]) > 0)
    // str[j]>atr[j+1]
    {
      strcpy(str[j + 1], str[j]); // str[j]=str[j+1];
      j--;
    }
    strcpy(str[j + 1], key);
  }

  printf("按首字母排序后：\n");
  for (i = 0; i < 3; i++)
  {
    puts(str[i]);//自动换行
  }

  system("pause");
  return 0;
}