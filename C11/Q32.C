#include<stdio.h>

int main(){
    float fuleconsumed;
    int totaldistance;

    printf(" full consumed and total distance :");

    scanf("%f%i",&fuleconsumed,&totaldistance);

    float averageconsumption = totaldistance/fuleconsumed;

    printf("average consumption :%1.f", averageconsumption);
    return 0;
}