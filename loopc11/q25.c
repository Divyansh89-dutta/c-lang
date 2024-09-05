#include<stdio.h>

int main(){
    int n;
    printf("Enter the value here: ");
    scanf("%i",&n);
    int sum = 0;
    for(int i =1;i<=n;i++){
        sum = sum+i;
    }
    printf("Sum==>%i\n",sum);
    printf("Average==>%i",sum/n);
    return 0;
}