#include<stdio.h>

int main(){
    float km;
    scanf("%f",&km);
    float mph = km*.621371;
    printf("conversion ke baad %.2f", mph);
    return 0;
}