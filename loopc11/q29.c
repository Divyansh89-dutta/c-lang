#include<stdio.h>

int main(){
    int n1;
    printf("Enter the value here: ");
    scanf("%i",&n1);
    int n2;
    printf("Enter the value here: ");
    scanf("%i",&n2);
    for(int j = n1 ;j<=n2;j++){
        int n = j;
        int p = 0;
        for(int i =1;i<=n/2;i++){
            if(n%2==0){
                p = 1;
                break;
            }
        }
        if(p==0){
            printf("%i ",n);
    }
    }
    return 0;
}