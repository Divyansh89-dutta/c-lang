#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value : ");
    scanf("%i%i",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Answer after swap is of a:%i and b:%i",a,b);
    return 0;
}