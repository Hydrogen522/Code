#include <stdio.h>

int main()
{
    int x=2;
    int count=0;
    // scanf("%d",&x);

    // for(x=2;x<100;x++){
    // while(count<50){
    for(x=2;count<50;x++){
        int isPrime=1;
        for(int n=2;n<x;n++){
            if(x%n==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            printf("%d\n",x);
            count++;
        }
        // x++;
    }

    printf("\n");

    return 0;
}