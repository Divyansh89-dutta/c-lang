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
    printf("dividing  %f",(float)(a+b)/c); 
    int d = c;
    float e = d/e;
    printf(" dividing e :" );
    scanf("%f", &e);
    printf("final answer will be %1.f", (float)(d)/e);
    return 0;
}