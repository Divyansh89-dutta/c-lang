#include<stdio.h>

int main(){
    float p,t,i;
    printf("Enter the value here: ");
    scanf("%f%f%f",&p,&t,&i);
    printf("Simple Inerest is %.2f",(p*t*i)/100);
    return 0;
}