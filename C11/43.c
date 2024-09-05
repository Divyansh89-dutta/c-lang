#include<stdio.h>

int main(){
    float m,e,s,h;
    printf("Enter the marks: ");
    scanf("%f%f%f%f",&m,&e,&s,&h);
    float per = (m+e+s+h)/4;
    if(per>75){52049
        printf("A grade %.1f%%",per);
    }
    else if(per>75){
        printf("B grade %.1f%%",per);
    }
    else if(per>55){
        printf("C grade %.1f%%",per);
    }
    else if(per>45){
        printf("D grade %.1f%%",per);
    }
    else{
        printf("F grade %.1f%%",per);
    }
    return 0;
}
