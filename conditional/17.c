#include<stdio.h>

int main(){
    int cp,sp;
    printf("Enter the amount here: ");
    scanf("%i%i",&cp,&sp);
    int amo = sp-cp;
    if(sp>cp){
        printf("profit of %i",amo);
    }
    else{
        printf("loss of %i",-amo);
    }
    return 0;
}