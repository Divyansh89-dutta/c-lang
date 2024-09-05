#include<stdio.h>

int main(){
    int a,b;
    scanf("%i%i",&a,&b);
    if (a>=60,b>=60){
        printf("passed");
    }
    else if(a>=50,b>=50){
        printf("almost passed");
    }
    else{
        printf("fail");
    }
    return 0;
}