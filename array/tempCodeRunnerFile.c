#include<stdio.h>

int main(){
    int a[]={1,23,3,14,56,78,77};
    int n = sizeof(a)/sizeof(int);
    for(int j =0;j<n;j++){
        for(int i =0;i<n-j-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%i ",a[i]);
    }
    return 0;
}