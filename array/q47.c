#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(int);
    int k =3;
    for(int j =0;j<k;j++){
        int t = a[0];
        for(int i =0;i<n-1;i++){
            a[i] = a[i+1];
        }
        a[n-1]=t;
    }
    for(int i =0;i<n;i++){
        printf("%i ",a[i]);
    }
    return 0;
}