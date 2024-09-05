#include<stdio.h>

int main() {
    char str[] = "SHERYIANS";
    int len = sizeof(str) / sizeof(char);
   
    for (int i = 0; i < len - 1; i++) {
        printf("%c ", str[i]);
    }
    return 0;
}
