#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the value here: ");
    scanf("%i",&n);
    int sum = 0;
    int copy =n;
    while(n>0){
        int rem = n%10;
        int b= 3;
        int rev = 1;
        for(int i =1;i<=b;i++){
            rev = rev*rem;
        }
        sum =sum+rev;
        n = n/10;
    }
    if(copy == sum ){
        printf("\nYes it is a Armstrong number\n");
    }
    else{
        printf("\nNo, It's not an Armstrong number");
    }
    return 0;
}