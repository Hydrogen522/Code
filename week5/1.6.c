#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int a[n+1];
    int count=0;
    for (int i= 2;i<=n;i++) {
        int flag=1;
        for (int j=2;j<i;j++) {
            if (i%j==0){
                flag=0;
                break;
            }
        }
        if (flag==1){
            a[count]=i;
            count++;
        }
    }

    for (int i=0;i<count;i++){
        if(i<count){
            printf("%d ",a[i]);
        }else{
            printf("%d",a[i]);
        }
    }
    return 0;
}