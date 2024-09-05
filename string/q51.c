#include <stdio.h>

int main() {
    char str[] = "Hello Shery";
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    printf("String is %s Length of the string is %d", str, i);
    return 0;
}
