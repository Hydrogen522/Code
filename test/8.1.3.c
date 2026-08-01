#include <stdio.h>

int main()
{
    //先定义数组，记得初始化。在用下标表示数，数组的数表示次数。最后打印出来。
    int x;
    const int number = 10;
    int cnt[10];
    int i = 0;
    for (i = 0;i < 10;i++) {
        cnt[i] = 0;
    }
    scanf_s("%d", &x);
    while(x>=0 && x < 10) {
        cnt[x]++;
        scanf_s("%d", &x);
    }
    for (i = 0;i < 10;i++) {
        printf("%d:%d\n", i, cnt[i]);
    }
    return 0;
}
//总结
//要循环scanf输入x
//x属于0到9
