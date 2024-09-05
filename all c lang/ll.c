#include <stdio.h>

void convertToWords(int num) {
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num < 1) {
        printf("Please enter a positive integer");
    } else if (num == 0) {
        printf("Zero");
    } else {
        if (num >= 1000000) {
            printf("Number is too large for this program to handle");
        } 
        else {
            if (num >= 1000) {
                printf("%s Thousand ", ones[num / 1000]);
                num %= 1000;
            }
            if (num >= 100) {
                printf("%s Hundred ", ones[num / 100]);
                num %= 100;
                if (num > 0) {
                    printf("and ");
                }
            }
            if (num >= 20) {
                printf("%s ", tens[num / 10]);
                num %= 10;
                if (num > 0) {
                    printf("%s ", ones[num]);
                }
            } else if (num >= 11) {
                printf("%s ", teens[num - 10]);
            } else if (num > 0) {
                printf("%s ", ones[num]);
            }
            printf("\n");
        }
    }
}

int main() {
    int num;

    printf("kuch puch raha hai bsdk: ");
    scanf("%i", &num);

    convertToWords(num);

    return 0;
}
