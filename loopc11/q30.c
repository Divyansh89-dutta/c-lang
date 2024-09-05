#include<stdio.h>

int main(){
    int n;
    printf("Enter the value here: ");
    scanf("%i",&n);
    int sum =0;
    while(n>0){
        int rem = n%10;
        sum =sum+rem;
        n = n/10;
    }
    printf("%i",sum);
    return 0;
}