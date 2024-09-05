#include<stdio.h>

int main(){
    float a,b;
    printf("the user will provide the value: ");
    scanf("%f%f",&a,&b);
    printf("The final answer is :%.2f",a/b);
    return 0;
}