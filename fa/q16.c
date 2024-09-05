#include<stdio.h>
int main()
{
int a = 12;
int *b = &a;
*b = *b*12;
printf("%i ",*b);
return 0;
}