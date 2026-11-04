#include <stdio.h>
int main()
{
    char i;
    scanf("%c",&i);
    if(i>='A'&&i<='Z'){
        i+=32;
    }else if(i>=97&&i<=122){
        i-=32;
    }
    printf("%c",i);
    return 0;
}
//A->65 Z->90
//a->97 z->122