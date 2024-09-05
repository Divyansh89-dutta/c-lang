#include<stdio.h>

int main(){
    int m;
    printf("Enter the value here: ");
    scanf("%i",&m);
    printf("%i hour and %i minute",m/60,m%60);
    return 0;
}