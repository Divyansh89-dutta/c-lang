#include<stdio.h>
int main()
{
int n;
printf("n: ");
scanf("%i",&n);
int a[n];
printf("Enter the element of array: ");
for(int i=0;i<n;i++){
    scanf("%i",&a[i]);
}
int max = a[0];
int index = 0;
for(int i=1;i<n;i++){
    if (a[i]>max)
    {
        max = a[i];
        index = i;
    }
}
printf("%i is the largest element and its index is %i",max,index);
return 0;
}