#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,fz,fm;
  float sum;

  fz=2,fm=3;
  for(i=0;i<30;i++)
  {
    sum+=((1.0)*fz)/((1.0)*fm);
    fz+=2;
    fm+=(fz-2)+fm;
  }

  printf("数列的值为：%.3f",sum);

  system("pause");
  return 0;
}