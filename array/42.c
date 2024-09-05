#include<stdio.h>

int main(){
    int a[] ={1,2,3,4,5,6,7};
    int n = 5;
    int flag = -1;
    for(int i=0;i<5;i++){
        if(a[i]==n){
            flag=i;
            break;
        }
    }
    if(flag!=-1){
        printf("Element found %i at index %i",n,flag);
    }
    else{
        printf("%i",flag);
    }
    return 0;
}