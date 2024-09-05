#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value here: ");
    scanf("%i%i",&a,&b);
    if(a==b){
        printf("Eqaul");
    }
    else{
        printf("Not equal");
    }
    return 0;
}