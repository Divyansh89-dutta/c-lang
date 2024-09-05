#include<stdio.h>

int main(){
    float fuleconsumed,totaldistance;
    printf("Enter the value : ");
    scanf("%f%f",&fuleconsumed,&totaldistance);
    printf("The average is :%1.f",(float)totaldistance/fuleconsumed);
    return 0;
}