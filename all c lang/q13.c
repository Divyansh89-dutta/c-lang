#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the value : ");
    scanf("%i%i%i",&a,&b,&c);
    if(a>=b&&a>=c){
        printf("A largest");
    }
    else if(b>=a&&b>=c){
        printf("B largest");
    }
    else{
        printf("C largest");
    }
    return 0;
    }