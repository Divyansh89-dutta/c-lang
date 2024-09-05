#include<stdio.h>
int main()
{
float c = 12.4;
float *ptr = &c;
printf("%x",*ptr);
return 0;
}