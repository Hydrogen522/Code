#include <stdio.h>
int main()
{
    // int score=80;
    // if (score >= 90.0)
    // printf("A");
    // else if (score >= 80.0)
    // printf("B");
    // else if (score >= 70.0)
    // printf("C");
    // else if (score >= 60.0)
    // printf("D");
    // else
    // printf("F");
    char s;
     scanf("%c",&s);
     switch(s)
     { 
          case 'A' : printf("85~100\n");
          case 'B' : printf("70~84\n");
          case 'C' : printf("60~69\n");
          case 'D' : printf("<60\n");
          default : printf("错误输入\n");
       }

    return 0;
}