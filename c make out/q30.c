#include<stdio.h>
int main()
{
int n;
printf("n: ");
scanf("%i",&n);
int sum = 0;
while (n>0)
{
    int rem = n%10;
    sum = sum+rem;
    n = n/10;
}
printf("Sum = %i",sum);
return 0;
}