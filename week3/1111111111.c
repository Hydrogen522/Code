#include <stdio.h>
int main()
{
    const double PI=3.14159;
    double r;
    scanf("%lf",&r);
    double s=PI*r*r;
    printf("半径为%.2lf的圆面积是:%lf",r,s);
    return 0;
}