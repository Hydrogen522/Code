#include <stdio.h>

int main()
{
    const double RATE=8.25;
    const int STANDERD= 40;
    int hour;
    double pay;

    scanf("%d",&hour);

    if(hour>STANDERD){
        pay=STANDERD*RATE+(hour-STANDERD)*(RATE*1.5);
    }else{
        pay=hour*RATE;
    }

    printf("%lf",pay);
    
    return 0;
}