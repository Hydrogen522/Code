#include <stdio.h>

int main()
{
    int a,n=0;
    scanf("%d",&a);

/*   if(a>999){
        n=4;
    }else if(a>99){
        n=3;
    }else if(a>9){
        n=2;
    }else{
        n=1;
    }

    printf("%d",n);
*/
    // n++;
    // a/=10;
    // 零的情况有用
    while(a>0){
        n++;
        a/=10;
    }
    printf("%d\n",n);

    return 0;
}