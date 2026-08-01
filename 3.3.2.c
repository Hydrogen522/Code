// 写一个分段函数
#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    int f;

    if(x==-1){
    f=-1;}
    else if(x==0){
    f=0;}
    else if(x==1){
    f=1;}

    printf("%d",f);
    
    return 0;
}