#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    double square1=x*x;
    double square2=3.14*(x/2.0)*(x/2.0);
    printf("%.2lf",square1-square2);
    return 0;
}