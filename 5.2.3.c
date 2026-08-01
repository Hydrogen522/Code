#include <stdio.h>

int main()
{
    int x;
    int exit=0;

    scanf("%d",&x);

    int one,two,five;
    
    for(one=1;one<x*10;one++){
        for(two=1;two<x*10/2;two++){
            for(five=1;five<x*10/5;five++){
                if(one+two*2+five*5==x*10){
                    printf("用%d个一角,%d个二角,%d个五角可以换%d元钱\n",one,two,five,x);
                    exit=1;
                    // break;
                    goto out;
                }
            }
            // if(exit){
            //     break;
            // }
        }
        // if(exit){
            // break;
        // }
    }
    out:
    return 0;
}