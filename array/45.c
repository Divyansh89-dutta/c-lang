#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5,7,8};
    int n = sizeof(a)/sizeof(int);
    int tem=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=tem;
    for(int i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}