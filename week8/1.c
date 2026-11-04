#include <stdio.h>
#include <string.h>

int main(){
    int numCnt=0,charCnt=0;
    char s[100];
    fgets(s,sizeof(s),stdin);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            charCnt++;
        }else if(s[i]>='0'&&s[i]<='9'){
            numCnt++;
        }
    }
    printf("%d %d",numCnt,charCnt);

    return 0;
}