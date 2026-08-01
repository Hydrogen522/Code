#include <stdio.h>

int main()
{
    int x;
    double sum=0.0;

    scanf("%d",&x);

    int sign=1;

    for(int i=1;i<=x;i++){
        sum+=sign*1.0/i;
        sign=-sign;
    }
    printf("f(%d)=%lf",x,sum);

    return 0;
}