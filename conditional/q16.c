#include<stdio.h>

int main(){
    float m,s,e,h;
    printf("Enter your marks here: ");
    scanf("%f%f%f%f",&m,&s,&e,&h);
    float total = (m+s+e+h)/4;
    if(total>=85){
        printf("\nGrade A");
    }
    else if(total>=75){
        printf("\nGrade B");
    }
    else if(total>=64){
        printf("\nGrade C");
    }
    else if(total>=54){
        printf("\nGrade D");
    }
    else if(total>=44){
        printf("\nGrade E");
    }
    else{
        printf("\nGrade F");
    }
    return 0;
}