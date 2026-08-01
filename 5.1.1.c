#include <stdio.h>

int main()
{
    int n,fact=1;
    scanf("%d",&n);

    // for(int i=1;i<=n;i++){
    //     fact*=i;
    // }

     for(int i=n;i>0;i--){
        fact*=i;
    }
    
    printf("%d!=%d",n,fact);

    return 0;
}