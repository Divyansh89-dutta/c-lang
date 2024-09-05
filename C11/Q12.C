#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("user will provide the value :");
    scanf("%i%i%i", &a,&b,&c);
    printf("the final answer is  %f",(float)(a+b)/c);
    return 0;    
}