#include<stdio.h>

int main(){
    int a;
    printf("Enter the value here: ");
    scanf("%i",&a);
    
    int b;
    printf("Enter the value here: ");
    scanf("%i",&b);

    int sum =1;

    for(int i =1;i<=b;i++){
        sum = a*sum;
    }
    printf("%i",sum);
    return 0;
    
}