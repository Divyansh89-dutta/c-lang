#include<stdio.h>

int main(){
    int a[] = {1,-23,56,-63,36};
    int size = sizeof(a)/sizeof(int);
    printf("Positive: ");
    for(int i=0;i<size;i++){
        if(a[i]>0){
            printf(" %i",a[i]);
        }
    }
    printf("\nNegative: ");
    for(int j=0;j<size;j++){
        if(a[j]<0){
            printf(" %i",a[j]);
        }
    }
    return 0;
}