#include <stdio.h>

int main()
{
    char *s="hello world";
    s[0]='B';
    printf("s[0]=%c",s[0]);

    return 0;
}
//表达字符串时s[0]=后面要加单引号
//字符串用%c