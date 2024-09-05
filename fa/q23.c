#include <stdio.h>
#include <string.h>
typedef struct{
    int price;
    char name[100];
    char color[100];
    char type[100];
    char beltType[100];
}Ghadi;

int main() {
    Ghadi kennethCole = {15000, "kenneth cole", "silver", "automatic", "chain"};
    printf("price\tname\tcolor\ttype\tbeltType\n");
    printf("%d\t%s\t%s\t%s\t%s\n", kennethCole.price, kennethCole.name, kennethCole.color, kennethCole.type, kennethCole.beltType);
    return 0;
}
