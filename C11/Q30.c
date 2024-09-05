#include<stdio.h>

int main(){
    int a = 12 ,b = 13 ,c;
    c = a;
    a = b;
    b = c;
    printf("the final answer after swap a = %i b = %i ", a,b);
    return 0;
}

