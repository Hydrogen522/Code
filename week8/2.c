#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100],res[200];
    scanf("%s%s",s1,s2);
    if(strcmp(s1,s2)<=0){
        strcpy(res,s1);
        strcat(res,s2);
    }else{
        strcpy(res,s2);
        strcat(res,s1);
    }
    printf("%s",res);
    return 0;
}