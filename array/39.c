#include<stdio.h>

int main(){
    int n;
    scanf("%i",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%i",&a[i]);
    }
    printf("Normal number ");
    for(int i =0;i<n;i++){
        printf("%i ",a[i]);
    }
    printf("Rervese number");
    for(int i =n-1;i>=0;i--){
        printf("%d,",a[i]);
    }
    return 0;
}