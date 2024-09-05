
#include<stdio.h>

int pla(int n) {
    int rev = 0;
    int copy = n;
    while (n > 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (rev == copy) {
        return 1; 
    } else {
        return 0; 
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%i", &n);
    int ans = pla(n);
    if (ans == 1) {
        printf("%i is a palindrome", n);
    } else {
        printf("%i is not a palindrome", n);
    }
    return 0;
}
