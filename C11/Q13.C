#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("user will provid the value :");
    scanf("%i%i%i", &a,&b,&c);
    printf("the final answer will be %.1f",(float)(a+b)/c);
    return 0;
}