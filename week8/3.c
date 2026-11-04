#include<stdio.h>
int main(){
    char id[5][19];
    for(int i=0;i<5;i++){
        scanf("%s",id[i]);
    }
    for(int i=0;i<5;i++){
        printf("%s\n",id[i]);
    }
    return 0;
}