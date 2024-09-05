#include<stdio.h>

int main(){
    int n;
    printf("Enter the value : ");
    scanf("%i",&n);
    switch(n){
        case 1:
         printf("1 is your type");
          break;
        case 2:
         printf("2 is your type");
          break;
        case 3:
         printf("3 is your type");
          break;
        default:
         printf("Bsdk kuch bhi!!");
    }
    return 0;
}