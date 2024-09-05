#include<stdio.h>

int main(){
    int p,t,i;
    printf("Enter the value : ");
    scanf("%i%i%i",&p,&t,&i);
    printf("simple interest %.2f",(float)(p*t*i)/100);
    return 0;
}