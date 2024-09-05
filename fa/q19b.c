//user se size of array maango and utne number maanglo and iske 
//baad puchho ke aur number chachiye agar'y' bolo to
//ek aur number maango and iske baad fir puchho jab tak 'n' na bole.
//aur fir 'n' bolne par saare number print kro.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    char choice;
    printf("Enter the size of the array: ");
    scanf("%i", &size);
    int *PTR = calloc(size, sizeof(int));
    if (PTR == NULL) {
        printf("Cannot allocate memory");
        return 1;
    }
    printf("Enter %i numbers for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%i", &PTR[i]);
    }
    do {
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'y' || choice == 'Y') {
            size++;
            PTR = realloc(PTR, size * sizeof(int));
            if (PTR == NULL) {
                printf("Cannot allocate memory");
                return 1;
            }
            printf("Enter a new number: ");
            scanf("%i", &PTR[size - 1]);
        } else if (choice != 'n' && choice != 'N') {
            printf("Invalid choice. Please enter 'y' or 'n'.\n");
        }
    } while (choice != 'n' && choice != 'N');
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%i ", PTR[i]);
    }
    free(PTR);
    return 0;
}
