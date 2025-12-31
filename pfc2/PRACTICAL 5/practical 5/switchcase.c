#include<stdio.h>
int main(){
int a,b;
char choice;
int sum;
printf("Anant vishwakarma\n");
printf("ERP ID-ru-25-10180\n");
printf("entera and b\n");
scanf("%d %d",&a,&b);
printf("enter");
scanf("%c",&choice);
printf("%c", choice);
switch(choice){
case '+':printf("%d",a+b);
break;
case '-':
printf("%d",a-b);
break;
case '*':
printf("%d",a*b);break;
case '/':
printf("%d",a/b);
break;
default:
printf("invalid");}
return 0;
}