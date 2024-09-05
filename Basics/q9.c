#include<stdio.h>

int main(){
    int a = 23,b = 34,c;
    c = a;
    a = b;
    b = c;
    printf("A will be %i and B will be %i",a,b);
    return 0;
}