#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//alt+shift+f美化快捷键


//1
// int main()
// {
//   int n = 0;
//   do
//   {
//     n += 1;
//   } while (n <= 4);

//   printf("n = %d", n);

//   system("pause");
//   return 0;
// }

//2
// int main()
// {
//   int s=1,k=1;

//   while(s<=100)
//   {
//     s=3*s+1;

//     k+=1;
//   }

//   printf("k = %d", k);

//   system("pause");
//   return 0;
// }

//3计算单数累乘
int main()
{
  int n,i=1,s=1;

  printf("请给n赋值：");
  scanf("%d",&n);

  while(i<=n)
  {
    s*=i;
    i+=2;
  }

  printf("s的值为%d\n",s);

  system("pause");
  return 0;
}


