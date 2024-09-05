#include<stdio.h>

int main(){
    int a = 23 , b = 56 , c;
    c = a;
    a = b;
    b = c;
    printf("Final value after swap of a :%i and b :%i",a,b);
    return 0;
}