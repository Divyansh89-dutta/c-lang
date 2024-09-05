#include<stdio.h> 
int main(){
    int a;
    scanf("%i",&a);

    if(a<0 && a%2==0){
        printf("-ve or even");
    }
    else if(a>0 && a%2==0){
        printf("+ve or even");
    }
    else if(a<0 && a%2!=0){
        printf("-ve or odd");
    }
    else {
        printf("+ve or odd");
    }
    return 0;
}