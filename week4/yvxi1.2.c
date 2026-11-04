#include <stdio.h>
int main()
{
    int count;
    scanf("%d",&count);
    do
    {
        printf("Welcome to C!\n");
        count++;
    }while(count<5);
    return 0;
}