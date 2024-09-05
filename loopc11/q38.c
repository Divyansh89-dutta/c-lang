#include<stdio.h>

int main(){
    int n;
    printf("Enter the value here: ");
    scanf("%i",&n);
    int sum =0;
    int copy = n;
    while(n>0){
        int rem = n%10;
        int fact = 1;
        for(int i =1;i<=rem;i++){
            fact =fact*i;
        }
        sum =sum+fact;
        n = n/10;
    }
    if( sum == copy){
        printf("Yes it is a Storng Number");
    }
    else{
        printf("No it is not a Strong number");
    }
    return 0;
}