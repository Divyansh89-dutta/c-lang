#include<stdio.h>

int main(){
    int rad;
    printf("Enter the value : ");
    scanf("%i",&rad);
    printf("Perimeter of the circle is :%.2f",(float)2*(3.14*rad));
    return 0;
}