#include <stdio.h>
int main(){

    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=0;
        }
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            scanf("%d",&arr[i][j]);
            arr[i][m-1]+=arr[i][j];
            arr[n-1][j]+=arr[i][j];
            arr[n-1][m-1]+=arr[i][j];
        }
    }
    
    printf("计算后得到的数组是:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j<m-1){
                printf("%d ",arr[i][j]);
            }else{
                printf("%d\n",arr[i][j]);
            }
        }
    }
    
    return 0;
}