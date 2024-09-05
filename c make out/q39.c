#include<stdio.h>
int main()
{
int n;
printf("N: ");
scanf("%i",&n);
int a[n];
printf("Element of array: ");
for(int i =0;i<n;i++){
    scanf("%i",&a[i]);
}
printf("Normal Order: ");
for(int i =0;i<n;i++){
    printf("%i, ",a[i]);
}
printf("\nReverse Order: ");
for(int i =n-1;i>=0;i--){
    printf("%i, ",a[i]);
}
return 0;
}