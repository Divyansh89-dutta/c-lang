#include<stdio.h>

int main(){
    int a,b,c;
    printf("The user will provide the value: ");
    scanf("%i%i%i",&a,&b,&c);
    printf("The final value is:%.2f",(float)(a+b)/c);
    return 0;
}