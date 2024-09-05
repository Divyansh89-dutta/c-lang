#include<stdio.h>
int main()
{
int n;
printf("number: ");
scanf("%i",&n);
int fact = 1;
for(int i=1;i<=n;i++){
    fact = fact*i;
}
printf("Factorial=>%i",fact);
return 0;
}