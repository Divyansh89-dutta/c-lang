#include <stdio.h>


int main() {
    char str[]="adakam";
     int len ;
     len = sizeof(str) / sizeof(char);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}
