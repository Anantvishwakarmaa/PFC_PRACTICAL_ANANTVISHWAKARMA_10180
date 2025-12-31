#include <stdio.h>
int main(){
int a,b,c,max;
printf("Anant vishwakarma\n");
printf("ERP ID-ru-25-10180\n");
printf("enter a numbers");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
max = (a > b) ? ((a > c) ?a: c): ((b>c) ?b:c);
printf("Maximum number is: %d\n", max);
return 0;
}