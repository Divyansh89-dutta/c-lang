#include<stdio.h>

int main(){
    int cp,sp;
    printf("Enter the amount: ");
    scanf("%i%i",&cp,&sp);
    int amo = sp-cp;
    if(sp>cp){
        printf("Profit %i",amo);
    }
    else{
        printf("Loss %i",-amo);
    }
    return 0;
}