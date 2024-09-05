#include<stdio.h>

int main(){
    float a,b;
    printf("the user will provide the value: ");
    scanf("%f%f",&a,&b);
    printf("The user will provide the value :%.1f",a+b);
    return 0;
}