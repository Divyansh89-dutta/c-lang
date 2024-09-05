#include<stdio.h>
int main()
{
int year;
printf("Enter the your year here: ");
scanf("%i",&year);
if ((year%400==0) & (year%100!=0) || (year %4==0))
{
    /* code */printf("This is a Leap year");
}
else{
    printf("This is not a Leap year");
}
return 0;
}