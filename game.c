#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  srand((unsigned)time(NULL));
int answer =rand()%100+1;
int guess;
int count =0;
printf("猜数字游：");
printf("我已经想好再一个1到100之间的数字，你来猜猜卡看！\n");

while(1)
{
printf("请输入你的数字:");
scanf("%d",&guess);
count++;
if(guess>answer)
{
printf("大一点，请小一点\n");
}
else if(guess < answer)
{
printf("小了，再大一点\n");
}
else
{
printf("猜对啦，一共猜了%d次");
break;
}
}
printf("游戏结束\n");
  return ;
}
