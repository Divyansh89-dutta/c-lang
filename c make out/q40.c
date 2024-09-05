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
printf("Positive Element: ");
for(int i=0;i<n;i++){
    if (a[i]>0)
    {
        printf("%i ",a[i]);
    }
}
printf("\nNegative Element: ");
for(int i=0;i<n;i++){
    if (a[i]<0)
    {
        printf("%i ",a[i]);
    }
}
return 0;
}