#include<stdio.h>

int main(){
    int n;
    printf("Enter the value here: ");
    scanf("%i",&n);
    int fact = 1;
    for(int i= 1;i<=n;i++){
        fact = fact*i;
        printf(" * %i  ",i);
    }
        printf(" = %i",fact);
    return 0;
}