#include <stdio.h>
int main(){
int a,b,c;
printf("Anant vishwakarma\n");
printf("ERP ID-ru-25-10180\n");
printf("enter a numbers");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b&&a>c)
{ printf("a is largest number");
}
else if (a<b&&b>c)
{
printf("b is largest number");
}
else
{
printf("c is largest number");
}
return 0;
}