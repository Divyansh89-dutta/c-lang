#include<stdio.h>

int main(){
    int cel;
    printf("Ebter the value : ");
    scanf("%i",&cel);
    printf("The Fahrenheit is:%.2f",(float)(cel*1.8)+32);    return 0;
}