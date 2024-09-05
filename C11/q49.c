#include<stdio.h>

int main(){
    char n;
    printf("Enter the value: ");
    scanf("%c",&n);
    switch(n){
        case 'a':
          printf("a type");
          break;
        case 'b':
          printf("b type");
          break;
        case 'c':
          printf("c type");
          break;
        default:
        printf("pata nahi kiya likha hai");
    }
    return 0;
}
