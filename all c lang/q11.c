#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value : ");
    scanf("%i%i",&a,&b);
    if(a==b){
        printf("Equal");
    }
    else{
        printf("Not equal");
    }
    return 0;
}