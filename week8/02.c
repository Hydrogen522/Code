#include <stdio.h>
#include <string.h>

int main(){

    char words[20][50];
    char temp[101];
    int i=0;

    while(scanf("%100s",temp)!=EOF){
        if(i>=20||strlen(temp)>=50){
            printf("字符串越界，提前退出。\n");
            return 0;
        }
        strcpy(words[i],temp);
        i++;
    }

    for(i=i-1;i>=0;i--){
        printf("%s",words[i]);
        if(i>0){
            printf(" ");
        }
    }

    return 0;
}