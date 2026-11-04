#include <stdio.h>
int main()
{
    double x,y;
    scanf("%lf,%lf",&x,&y);
    double cx[4] = {2, -2, -2, 2};
    double cy[4] = {2, 2, -2, -2};
    int h = 0;
    for (int i = 0; i < 4; i++) {
        double dx = x - cx[i];
        double dy = y - cy[i];
        if (dx*dx+dy*dy<= 1.0) {
            h = 10;
            break;
        }
    }
    printf("点坐标为(%.2f,%.2f)\n\n", x, y);
    printf("该点高度为%d\n", h);
    return 0;
}