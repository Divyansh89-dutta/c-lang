#include<stdio.h>
int main()
{
int n;
printf("n: ");
scanf("%i",&n);
int a[n];
printf("Element of array: ");
for(int i =0;i<n;i++){
    scanf("%i",&a[i]);
}
int t = a[0];
for(int i=0;i<n;i++){
    a[i-1]=a[i];
}
a[n-1]=t;
printf("Result: ");
for(int i =0;i<n;i++){
    printf("%i ",a[i]);
}
return 0;
}