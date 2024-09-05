#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    int tem = a[n-1];
    for(int i =n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=tem;
    for(int i=0;i<n;i++){
        printf("%i ",a[i]);
    }
    return 0;
}