#include<stdio.h>
int main()
{
int n;
printf("n: ");
scanf("%i",&n);
int sum =0;
int a[n];
printf("Element of array: ");
for(int i=1;i<=n;i++){
    scanf("%i",&a[i]);
    sum =sum+a[i];
}
printf("Sum of all Array Element:%i",sum);
return 0;
}