#include<stdio.h>
#include<string.h>
struct Ghadi{
    int price;
    char name[100];
    char color[100];
    char type[100];
    char beltType[100];
};
int main()
{
struct Ghadi kennethCole;
kennethCole.price = 1600;
strcpy(kennethCole.name,"Kenneth Cole");
strcpy(kennethCole.color,"Black");
strcpy(kennethCole.type,"Automatic");
strcpy(kennethCole.beltType,"Leather");

return 0;
}