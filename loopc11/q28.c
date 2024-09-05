#include<stdio.h>

int main(){
    int n;
    printf("Enter the value here: ");
    scanf("%i",&n);
    int even =0;
    int odd = 0;
    for(int i =1;i<=n;i++){
        if(i%2==0){
            even = even+i;
        }
        else{
            odd=odd+i;
        }
    }
    printf("%i \n",even);
    printf("%i \n",odd);
    return 0;
}