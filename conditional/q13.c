#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value here: ");
    scanf("%d %d %d",&a, &b, &c);
    if(a > b && a > c){
        printf("A is greater than both of them.");
    }
    else if(b > a && b > c){
        printf("B is greater than both of them.");
    }
    else{
        printf("C is greater than both of them.");
    }
    return 0;
}