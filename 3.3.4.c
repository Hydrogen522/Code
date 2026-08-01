#include <stdio.h>

int main()
{
 /*  int type;

    scanf("%d",&type);
*/
 /*   if(type==1){
        printf("你好");
    }else if(type==2){
        printf("早上好");
    }else if(type==3){
        printf("晚上好");
    }else if(type==4){
        printf("再见");
    }else{
        printf("什么");
    }
*/
 /* switch(type){
        case 1:
        printf("你好");
        break;
        case 2:
        printf("早上好");
        break;
        case 3:
        printf("晚上好");
        break;
        case 4:
        printf("再见");
        default:
        printf("什么");
        break;

    }
*/

    int score;
    scanf("%d",&score);
    score=score/10;
    switch(score){
        case 10:
        case 9:
        printf("A\n");
        break;
        case 8:
        printf("B\n");
        break;
        case 7:
        printf("C\n");
        break;
        case 6:
        printf("D\n");
        break;
        default:
        printf("F\n");
        break;
    }
    return 0;
}