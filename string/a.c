#include<stdio.h>

int main() {
    char str[] = "hello baba ji";
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if(str[i]=='a'){
            count++;
    }
        i++;
    }
    printf("The character 'a' appears %d times in the string.", count);
    return 0;
}
