#include<stdio.h>

int main(){
    float rad;
    printf("the are of radius :");
    scanf("%f", &rad);
    float area = 3.14*(rad*rad);
    printf("and the ans is %.1f", area);
    return 0;
}