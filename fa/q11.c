#include<stdio.h>
int main()
{
float c =12.4;
float *per = &c;
float **per2 = &per;
float ***per3 = &per2;
printf("Value of c is %x\n",*per3);
return 0;
}