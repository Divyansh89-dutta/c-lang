#include<stdio.h>

int main(){
    int kmph;
    printf("Enter the value : ");
    scanf("%i",&kmph);
    printf("Final value :%.4f",(float)(kmph)*0.621371);
    return 0;
}