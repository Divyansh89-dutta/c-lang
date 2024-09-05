#include<stdio.h>
int main()
{
int a = 23,b = 45,c;
c = a;
a = b;
b = c;
printf("Output: a = %i ,b = %i",a,b);
return 0;
}