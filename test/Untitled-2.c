#include <stdio.h>

int main()
{
    printf("请输入票面和金额\n");
    int bill=0;
    int price=0;

    scanf("%d %d",&bill,&price);

    if (bill>price){
        printf("%d",bill-price);
    }else{
        printf("你的钱不够");
    }


    return 0;
}
