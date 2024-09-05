#include<stdio.h>
int main()
{
int n;
printf("N: ");
scanf("%i",&n);
int a[n];
printf("Element of array: ");
for(int i=0;i<n;i++){
    scanf("%i",&a[i]);
}
int K;
printf("K: ");
scanf("%i",&K);
for(int j=0;j<K;j++){
    int t =a[0];
    for(int i=0;i<n-1;i++){
       a[i]=a[i+1];
    }
    a[n-1]=t;
}
for(int i =0;i<n;i++){
    printf("%i ",a[i]);
}
return 0;
}