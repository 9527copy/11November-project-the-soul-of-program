#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include <unistd.h>

int main()
{
  int secret_number, guess;

  // 设置随机数种子
  srand(time(NULL));

  // 生成一个1到100之间的随机数作为答案
  secret_number = rand() % 100 + 1;

  // 初始化猜测次数
  int guess_count = 0;

  // 提示用户输入猜测的数字
    printf("请输入一个1到100之间的数字：");

  // 循环直到用户猜对为止
  while (1)
  {
    // 读取用户输入的数字
    scanf("%d", &guess);

    // 增加猜测次数
    guess_count++;

    // 判断用户输入的数字是否正确
    if (guess == secret_number)
    {
      printf("恭喜你，猜对了！\n");
      printf("你一共猜了%d次。\n", guess_count);
      break;
    }
    else if (guess < secret_number)
    {
      printf("猜小了，请继续猜。\n");
    }
    else
    {
      printf("猜大了，请继续猜。\n");
    }

    // 如果猜测次数达到3次，直接关机
    if (guess_count >= 3)
    {
      printf("很遗憾，你未能猜中。游戏将在5秒后关闭。\n");
      sleep(5);
      // halt();
    }
  }

  return 0;
}