#include<stdio.h>

int main(){
    int a;
    printf("Enter the value : ");
    scanf("%i",&a);
    if(a>0){
        printf("Positive");
    }
    else if(a==0){
        printf("neither Positive nor Negative ");
    }
    else{
        printf("Negative");
    }
    if(a%2==0){
        printf(" Even");
    }
    else{
        printf(" odd");
    }
    return 0;
}