#include<stdio.h>

int main(){
    int h;
    printf("Enter the your height here: ");
    scanf("%i",&h);
    if(h>=200){
        printf("Tall guy(lambu)");
    }
    else if(h>=150 && h<=200){
        printf("Average");
    }
    else {
        printf("Chotu do chai lana");
    }
    return 0;
}