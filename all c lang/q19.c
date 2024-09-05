#include<stdio.h>
int main(){
  
    int a;
    printf("enter the value");
    scanf("%i",&a);
    if(a==1){
        printf("Monday");
    }
    else if(a==2){
        printf("Tusday");
    }
    else if(a==3){
        printf("Wedensday");
    }
    else if(a==4){
        printf("Thusday");
    }
    else if(a==5){
        printf("Firday");
    }
    else if(a==6){
        printf("Saturday");
    }
    else if(a==7){
        printf("Sunday");
    }
    return 0;
}