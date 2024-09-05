#include<stdio.h>

int main(){
    int a = 69, b = 96;
       a = a + b;
       b = a - b;
       a = a - b;
    printf("the answer of a = %i ,b = %i", a,b);
    return 0;
}