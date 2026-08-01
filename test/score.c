#include <stdio.h>

int main()
{
    const int STANDER=60;
    int score;
    scanf("%d",&score);
    printf("你的成绩是%d\n",score);

    if(score>STANDER){
        printf("恭喜你通过了考试。\n");
    }else{
        printf("很遗憾，你没有通过考试。\n");
    }
    printf("再见。");

    return 0;
}