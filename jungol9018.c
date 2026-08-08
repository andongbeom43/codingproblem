#include<stdio.h>
int main()
{int a,b;
printf("두 개의 수를 입력하시오. ");
scanf("%d %d",&a,&b);
printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n%d %% %d = %d",a,b,a+b,a,b,a-b,a,b,a*b,a,b,a/b,a,b,a%b);}
