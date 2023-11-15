#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int arr[3][3],i,j,t;

  srand(time(NULL));

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      arr[i][j]=rand()%9;
    }
  }

  printf("brfore: \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%4d",arr[i][j]);
    }
    printf("\n");
  }

  printf("after: \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      
      printf("%4d",arr[j][i]);
    }
    printf("\n");
  }


  system("pause");
  return 0;
}