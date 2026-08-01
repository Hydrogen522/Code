#include <stdio.h>

int main()
{

    int a,b,min;
    scanf("%d %d",&a,&b);

    if(a>b){
        min=b;
    }else{
        min=a;
    }
    int i=1,ret=0;
    for(i=1;i<=min;i++){
        if(min%i==0){
            ret=i;
        }
    }
    printf("最大公约数为%d",ret);

    return 0;
}