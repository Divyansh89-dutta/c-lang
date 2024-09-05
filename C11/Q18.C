#include<stdio.h>

int main(){
    float h,w;
    scanf("%f%f",&h,&w);
    float per = 2*(h+w);
    printf("perimeter of rectangle %.1f",2*(h+w));
    return 0;
}