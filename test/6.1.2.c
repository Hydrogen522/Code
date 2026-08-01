#include <stdio.h>

int main()
{
    int n;
    int i=1;
    scanf("%d",&n);
    int first=1;
    for(i=1;i<n;i++){
        first*=10;
    }
    i=first;
    while(i<first*10){
        int t=i;
        int sum=0;
        do{
            int d=t%10;
            t/=10;
            int p=1;
            int j=0;
            while(j<n){
                p*=d;
                j++;
            }
            sum+=p;
        }while(t>0);
        if(sum==i){
            printf("%d\n",i);
        }
        i++;
    }
    // printf("%d",first);
    return 0;
}