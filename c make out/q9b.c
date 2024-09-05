#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value here: ");
scanf("%i%i",&a,&b);
a = a+b;
b = a-b;
a = a-b;
printf("a = %i, b = %i",a,b);
return 0;
}