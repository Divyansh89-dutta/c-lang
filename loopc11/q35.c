#include<stdio.h>

int main(){
    int n;
    printf("Enter the value here: ");
    scanf("%i",&n);
    int sum = 0;
    int copy = n;
    while(n>0){
        sum =sum+n%10;
        n = n/10;
    }
    if(copy%sum==0){
        printf("Yes it is Harshed Number");
    }
    else{
        printf("No it's not a harshad number");
    }
    return 0;
}