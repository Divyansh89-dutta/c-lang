#include<stdio.h>

int main(){
    int m;
    printf("Enter your month: ");
    scanf("%i",&m);
    if(m==1){
        printf("month %i is Jan",m);
    }
    else if(m==2){
        printf("month %i is Feb",m);
    }
    else if(m==3){
        printf("month %i is Mar",m);
    }
    else if(m==4){
        printf("month %i is Apr",m);
    }
    else if(m==5){
        printf("month %i is May");
    }
    else if(m==6){
        printf("month %i is Jun",m);
    }
    else if(m==7){
        printf("month %i is Jul",m);
    }
    else if(m==8){
        printf("month %i is Aug");
    }
    else if(m==9){
        printf("month %i is Sep",m);
    }
    else if(m==10){
        printf("month %i is Oct",m);
    }
    else if(m==11){
        printf("month %i is Nev",m);
    }
    else{
        printf("month %i is Dec",m);
    }
    return 0;
}