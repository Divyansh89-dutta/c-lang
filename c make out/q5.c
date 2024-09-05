#include<stdio.h>
int main()
{
int c;
printf("Enter the value here: ");
scanf("%i",&c);
printf("Fahrenheit:%.2f",(c*1.8)+32);
return 0;
}