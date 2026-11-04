#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        sum1+=arr[i][i];
    }
    for(int i=0;i<n;i++){
        sum2+=arr[n-i-1][i];
    }

    int sum=sum1+sum2;
    if(n%2==1){
        sum=sum-arr[(n-1)/2][(n-1)/2];
        }
    printf("%d",sum);

    return 0;
}