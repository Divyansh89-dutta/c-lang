#include<stdio.h>

int main(){
    int n;
    printf("Enter the vale here: ");
    scanf("%i",&n);
    int rev =0;
    int copy = n;
    while(n>0){
        int rem =n%10;
        rev = rev*10+rem;
        n = n/10;
    }
    if(copy==rev){
        printf("\nThe number is a palindrome");
    }else{
        printf("\nThe number is not a palindrome");
    
    }
    return 0;
}