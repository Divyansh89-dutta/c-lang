#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, ";
    char str2[] = "world!";

    printf("%s%s\n", str1, str2);
    printf("Length of the string: %d\n", strlen(str1) + strlen(str2));

    return 0;
}
