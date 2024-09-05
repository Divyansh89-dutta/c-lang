#include<stdio.h>

int main(){
    char ch;
    printf("Enter your world here: ");
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("\nThe entered character is a vowel.");
    }
    else {
        printf("\nThe entered character is consonant.");
    }
    return 0;
}