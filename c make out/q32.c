#include<stdio.h>
int main()
{
int n;
printf("n: ");
scanf("%i",&n);
int rev = 0;
int copy = n;
while (n>0)
{
    int rem = n%10;
    rev = rev*10+rem;
    n = n/10;
}
if (copy==rev)
{
    printf("Palindromic Number");
}
else{
    printf("Not a Palindromic Number");
}
return 0;
}