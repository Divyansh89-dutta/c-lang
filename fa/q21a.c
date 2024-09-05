#include <stdio.h>
#include <string.h>
struct Ghadi {
    int price;
    char name[100];
    char color[100];
    char type[100];
    char beltType[100];
};
int main() {
    struct Ghadi kennethCole;
    kennethCole.price = 1600;
    strcpy(kennethCole.name, "Kenneth Cole");
    strcpy(kennethCole.color, "Black");
    strcpy(kennethCole.type, "Automatic");
    strcpy(kennethCole.beltType, "Leather");
    printf("Price: %d\n", kennethCole.price);
    printf("Name: %s\n", kennethCole.name);
    printf("Color: %s\n", kennethCole.color);
    printf("Type: %s\n", kennethCole.type);
    printf("Belt Type: %s\n", kennethCole.beltType);
    return 0;
}
