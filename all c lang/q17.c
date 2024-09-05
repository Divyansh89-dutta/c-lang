#include<stdio.h>

int main(){
    int cp,sp;
    printf("Enter the value : ");
    scanf("%i%i",&cp,&sp);
    int total = sp-cp;
    if(sp>cp){
        printf("Your profite is :%i",total);
    }
    else if(cp>sp){
        printf("Your loss is :%i",-total);
    }
    else{
        printf("Nor profit or Nor loss :%i",total);
    }
    return 0;
}