#include<stdio.h>
int main()
{
int n;
printf("n: ");
scanf("%i",&n);
int a[n];
printf("Element of array: ");
for(int i=0;i<n;i++){
    scanf("%i",&a[i]);
}
for(int j=0;j<n;j++){
    for(int i =0;i<n-j-1;i++){
        if (a[i]>a[i+1])
        {
        int tem = a[i];
        a[i]=a[i+1];
        a[i+1]=tem;
    }
    }
}
for(int i=0;i<n;i++){
    printf("%i ",a[i]);
}
return 0;
}