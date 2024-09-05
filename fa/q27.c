#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("chitti_the_file.txt", "w"); // Changed mode to "w" for writing
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    for (int i = 0; i < 15; i++) {
        fputc('@', fptr); // Writing '@' 15 times
    }
    fclose(fptr);
    return 0;
}
