#include<stdio.h>

int main(){
    int age;
    printf("Enter your age : ");
    scanf("%i",&age);
    if(age<18){
        printf("Go to home and watch pogo");
    }
    else {
        printf("Vote for Sheryians");
    }
    return 0;
}