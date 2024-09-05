#include<stdio.h>

int main(){
    int m,e,s,h;
    printf("Enter the marks of m,e,s,h : ");
    scanf("%i%i%i%i",&m,&e,&s,&h);
    float per = (m+e+h+s)/4;
    if(per>=75){
        printf("A = %.1f%%",per);
    }
    else if(per<=55){
        printf("B = %.1f%%",per);
    }
    else if(per<=45){
        printf("C = %.1f%%",per);
    }
    else if(per<=33){
        printf("D = %.1f%%",per);
    }
    else{
        printf("F =%.1f%%",per);
    }
    return 0;
}