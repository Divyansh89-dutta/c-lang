#include<stdio.h>

int main(){
    int n;
    printf("Enter the value here: ");
    scanf("%i",&n);
    int sum = 0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            sum =sum +i;
        }
    }
        if(sum == n){
            printf("The number is a perfect number");
        }else{
            printf("The number is not a perfect number");
        }
        return 0;
}