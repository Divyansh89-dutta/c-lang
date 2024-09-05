#include<stdio.h>

int main(){
    int a;
    int b;

    scanf("%i%i",&a,&b);
    if(a>b){
        printf("pass");
    }
    else if(b>a){
        printf("fail");
    }
    return 0;
}