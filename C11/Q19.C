#include<stdio.h>

int main(){
    int rad;
    printf("the are of radius :");
    scanf("%i", &rad);
    float area = 3.14*(rad*rad);
    printf("and the ans is %.1f", area);
    return 0;
}