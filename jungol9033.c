#include<stdio.h>
int main()
{int a;
    printf("점수를 입력하세요. ");
    scanf("%d",&a);
    if(a>=90){printf("A");}
    else if(90>a&&a>=80){printf("B");}
    else if(80>a&&a>=70){printf("C");}
    else if(70>a&&a>=60){printf("D");}
    else if(60>a){printf("F");}
    }