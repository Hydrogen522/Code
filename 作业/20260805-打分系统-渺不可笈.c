#include <stdio.h>

int main() 
{
    int n;
    int score=0;
    scanf("%d",&n);
    if(n>=0&&n<=10){
        score=n*6;
    }else if(n>=11&n<=20){
        score=10*6+(n-10)*2;
    }else if(n>=21&&n<=40){
        score=10*6+10*2+(n-20)*1;
    }
    printf("%d",score);
    return 0;
}