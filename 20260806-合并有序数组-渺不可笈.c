#include <stdio.h>

int main() {
    int n, m;
    int a[105], b[105], ret[210];
    
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
        int i = 0,j=0,k=0;    
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            ret[k++] = a[i++];
        } else {
            ret[k++] = b[j++];
        }
    }
    
    while (i < n) {
        ret[k++] = a[i++];
    }
    while (j < m) {
        ret[k++] = b[j++];
    }
    
    for (int p = 0; p < n + m; p++) {
        printf("%d ", ret[p]);
    }
    printf("\n");
    
    return 0;
}