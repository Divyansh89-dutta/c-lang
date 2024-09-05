#include<stdio.h>

int main(){
    int year;
    printf("Enter your year here: ");
    scanf("%i",&year);
    if((year % 400 == 0) & (year % 100 != 0) || (year % 4 == 0)){
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    }
    return 0;
}