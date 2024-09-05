#include<stdio.h>

int main(){
    int year;
    scanf("%i",&year);
    if(year%4==0){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
    return 0;
}