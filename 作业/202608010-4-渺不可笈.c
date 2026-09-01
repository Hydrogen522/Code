#include<stdio.h>

int main()
{
    double m,n;
    scanf("%lf %lf",&m,&n);
    double h=0,s=0;
    double t=1;
    for(int i=1;i<=n;i++){
        t=t*1/2;
    }
    h=m*t;
    s=m;
    int i=0;
    for(i=0;i<(n-1);i++){
        m=m*(0.5);
        s+=m*2;
    }
    s+=m*(0.5);
    printf("%.2lf\n%.2lf\n",h,s);
    return 0;
}