#include <stdio.h>

int main()
{
    int a,b;
    for(a=1;a<10;a++){
        for(b=1;b<10;b++){
            printf("%d*%d=%d\t",b,a,b*a);
            if(a==b){
                printf("\n");
                break;
            }
        }
    }
    return 0;
}