#include<stdio.h>

int main(){
    int n;
    printf("Enter the value here: ");
    scanf("%i",&n);
    int per =0;
    int cur = 1;
    printf("%i %i",per,cur);
    for(int i=3;i<=n;i++){
        int next = per+cur;
        printf(" %i",next);
        per = cur;
        cur= next;
    }
    return 0;
}