#include<stdio.h>

int main(){
    int a;
    int b;
    printf("user will be provide the value :");
    scanf("%i %i", &a,&b);
    printf ("the value of c will be %i", a+b);
    int c;
    printf(" the value c");
    scanf("%i",&c);
    printf("dividing answer d %f",(float)(a+b)/c);
    int d;
    printf(" the value d");
    scanf("%f",&d);
    printf("final is answer d %f",(float)(c)/d);
    return 0;
}