#include<stdio.h>

int main(){
    float a,b;
    printf("The user will provide the value: ");
    scanf("%f%f",&a,&b);
    printf("The final value will be:%.2f",a*b);
    return 0;
}