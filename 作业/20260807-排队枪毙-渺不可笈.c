#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a = 0;
    for (int i = 2; i <= n; i++) {
        a = (a + m) % i;
    }
    printf("%d\n", a + 1);

    return 0;
}