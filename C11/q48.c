#include<stdio.h>

int main(){
    int h;
    printf("Enter your height : ");
    scanf("%i",&h);
    if(h>200){
        printf("Tall guy(Lambu)");
    }
    else if(h>=150 && h<=200){
        printf("Average");
    }
    else{
        printf("Chotu do chai lana");
    }
    return 0;
}