#include<stdio.h>

int main(){
    int n;
    scanf("%i",&n);
    int a[n];
    int sum = 0;
    printf("Element of array: ");
    for(int i=1;i<=n;i++){
        scanf("%i",&a[i]);
        sum =sum+a[i];
    }
    printf("sum=>%i",sum);
    return 0;
}