#include<stdio.h>
int main()
{
int n;
printf("Number: ");
scanf("%i",&n);
int sum = 0;
for(int i =1;i<=n/2;i++){
    if (n%i==0)
    {
        sum = sum+i;
    }    
}
printf("Sum=>%i",sum+n);
return 0;
}