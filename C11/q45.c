#include<stdio.h>

int main(){
    char cha;
    printf("Enter the Character : ");
    scanf("%c",&cha);
    if(cha =='a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u'){
        printf("Vowel");
    }
    else{
        printf("Consonat");
    }
    return 0;
}