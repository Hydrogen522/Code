#include <stdio.h>

int main()
{
    int x;
    // scanf("%d",&x);
    int t;
    int count=0;    
    int mask=1;

    x=1345;
    t=x;
    // 判断其几位数,并设置mask
    do{
    t/=10;
    count++;
    mask*=10;
    }while(t>9);

    // printf("%d",mask);

    // 正序拆分
    int ret;
    do{
        ret=x/mask;
        x%=mask;
        if(mask>9){
            printf("%d ",ret);
        }else{
            printf("%d",ret);
        }
        mask/=10;
    }while(mask>0);

    return 0;
}