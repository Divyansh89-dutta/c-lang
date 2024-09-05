#include<stdio.h>

int main(){
    int rad;
    printf("the area of circle :");
    scanf("%i",&rad);
    float per = 3.14*(rad*rad);
    printf("and the perimeter %.2f", per);
    return 0;
}