#include<stdio.h>
int main()
{float a;
int s;
scanf("%f",&a);
s=(int)(a*10);
switch(s/10){
case 4:printf("scholarship");break;
case 3:printf("next semester");break;
case 2:printf("seasonal semester");break;
default:printf("retake");}
}