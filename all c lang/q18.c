#include<stdio.h>

int main(){
    char cha;
    printf("Enter the word : ");
    scanf("%c",&cha);
    if(cha=='a'||cha=='e'||cha=='i'||cha=='o'||cha=='u'){
        printf("Vowal%c",cha);
    }
    else{
        printf("Consonant%c",cha);
    }
    return 0;
}