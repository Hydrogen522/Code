#include <stdio.h>

void minmax(int a[],int len,int *max,int *min);

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
    int max,min;
    minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);
    printf("max=%d min=%d\n",max,min);

    return 0;
}
void minmax(int a[],int len,int *max,int *min){
    *max=a[0];
    *min=a[0];
    int i;
    for(i=1;i<len;i++){
        if(*max<a[i]){
            *max=a[i];
        }
        if(*min>a[i]){
            *min=a[i];
        }
    }
}
//表示整个数组时不用加方括号
//获取地址用&&&&&&&&