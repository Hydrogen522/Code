#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a = 0;

    //一个人迁移m位，故加m
    //再取余得到新的位次
    for (int i = 2; i <= n; i++) {
        a = (a + m) % i;
    }
    printf("%d\n", a + 1);

    return 0;
}