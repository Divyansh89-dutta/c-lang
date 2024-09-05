#include<stdio.h>
int main()
{
int h,m;
printf("Enter the time here: ");
scanf("%i%i",&h,&m);
printf("%i minutes",(60*h)+m);
return 0;
}