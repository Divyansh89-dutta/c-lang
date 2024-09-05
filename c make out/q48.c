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
int k;
printf("K: ");
scanf("%i",&k);
for(int i=0;i<k;i++){
    int tem = a[n-1];
    for(int j =n-1;j>0;j--){
        a[j]=a[j-1];
    }
    a[0]=tem;
}
for(int i =0;i<n;i++){
    printf("%i ",a[i]);
}
return 0;
}