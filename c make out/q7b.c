#include<stdio.h>
int main()
{
int m;
printf("Enter the time here: ");
scanf("%i",&m);
printf("%iHours, %iMinutes",m/60,m%60);
return 0;
}