#include <stdio.h>

int main()
{
    int m,n;
    int i;
    scanf("%d %d",&m,&n);
    if(m==1){
        i=2;
    }
    int cnt=0;
    int sum=0;
    for(int i=m;i<=n;i++){
        int isPrime=1;
        int k=2;
        for(k=2;k<i;k++){
            if(i%k==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
            cnt++;
            sum+=i;
        }
    }
    printf("%d %d",cnt,sum);
    return 0;
}