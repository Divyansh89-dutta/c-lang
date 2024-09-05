#include<stdio.h>

int main(){
    system("cls");
    int n1,n2,choise;
    printf("--Calculator---\n");
    printf("Enter number 1: ");
    scanf("%i",&n1);
    printf("Enter number 2: ");
    scanf("%i",&n2);
    system("cls");
    printf("-CHOSSE-YOUR-OPTION\n");
    printf("1) adding\n");
    printf("2) sub\n");
    printf("3) mul\n");
    printf("4) div\n");
    printf("\nChoose your option: ");
    scanf("%d", &choise);
    switch(choise){
        case 1:
        printf("Result = %i + %i = %i",n1,n2,n1+n2);
        break;
        case 2:
        printf("Result = %i - %i = %i",n1,n2,n1-n2);
        break;
        case 3:
        printf("Result = %i * %i = %i",n1,n2,n1*n2);
        break;
        case 4:
        printf("Result = %i / %i = %.2f",n1,n2,n1/n2);
        break;
        default:
        printf("Invalid Choice!");
        }
    return 0;
}