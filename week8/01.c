#include <stdio.h>
#include <string.h>
int main(){

    int n;
    scanf("%d",&n);

    char s[10][81];
    for(int i=0;i<n;i++){
        scanf("%s",&s[i]);
    }

    char a[81];
    scanf("%s",a);

    int flag=-1;
    for(int i=0;i<n;i++){
        if(strcmp(s[i],a)==0){
            flag=i+1;
            break;
        }
    }
    
    if(flag!=-1){
        printf("字符串%s是第%d个\n",a,flag);
    }else{
        printf("字符串没有找到\n");
    }
    
    return 0;
}