#include<stdio.h>

int main(){
    int day;
    printf("Enter your day: ");
    scanf("%i",&day);
    if(day==1){
        printf("Day %i is Monday",day);
    }
    else if(day==2){
        printf("Day %i is Tusday",day);
    }
    else if(day==3){
        printf("Day %i is Wednesday",day);
    }
    else if(day==4){
        printf("Day %i is Thursday",day);
    }
    else if(day==5){
        printf("Day %i is Friday",day);
    }
    else if(day==6){
        printf("Day %i is saturday",day);
    }
    else{
        printf("Day %i is Sunday",day);
    }
    return 0;
}
