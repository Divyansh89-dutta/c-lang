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
int t = a[n-1];
for(int i=n-1;i>0;i--){
    a[i]=a[i-1];
}
a[0]=t;
for(int i =0;i<n;i++){
    printf("%i ",a[i]);
}
return 0;
}