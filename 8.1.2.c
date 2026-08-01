#include <stdio.h>

int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    scanf_s("%d", &x);
    int number[100];
    while (x != -1) {
        number[cnt] = x;
        sum += x;
        cnt++;
        scanf_s("%d", &x);
    }
    if (cnt > 0) {
        int i;
        double average;
        for (i = 1;i <= cnt;i++) {
            if (number[i] > average) {
                printf("%d\t", number[i]);
            }
        }
    }

    return 0;
}