#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value here: ");
scanf("%i%i",&a,&b);
int sum = 1;
for(int i = 1;i<=b;i++){
    sum = sum*a;
}
printf("Sum=>%i",sum);
return 0;
}