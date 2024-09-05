#include<stdio.h>

int main(){
    int age;
    printf("enter your age here: ");
    scanf("%i",&age);
    if(age<18){
        printf("Got to home and watch pogo");
    }
    else{
        printf("Vote for Sheryains");
    }
    return 0;
}