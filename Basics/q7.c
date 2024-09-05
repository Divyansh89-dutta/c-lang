#include<stdio.h>

int main(){
    int h,m;
    printf("Enter the value here: ");
    scanf("%i%i",&h,&m);
    printf("%iMinutes",h*60+m);
    return 0;
}