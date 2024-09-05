#include<stdio.h>

int main(){
    int h,m;
    printf("Enter the value : ");
    scanf("%i%i",&h,&m);
    printf("Min is %i",h*60+m);
    return 0;
}