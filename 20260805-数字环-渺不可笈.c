#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);//读入个数
    int a[n];
    //读入数组
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);//读入位移数
    //移位
    //先存进去一个数组
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    //开始转化
    for(int i=0;i<n;i++){
        if(i+m<n){
            a[i+m]=b[i];
        }else{
            a[i+m-n]=b[i];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}