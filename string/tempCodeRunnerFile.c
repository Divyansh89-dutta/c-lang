#include<stdio.h>

int main(){
    char str[]="Labrodor lag gaya";
    char str2[]="Labrodor lae gaya";
    int n1=sizeof(str)/sizeof(char);
    int n2=sizeof(str2)/sizeof(char);
    if(n1!=n2){
        printf("Not identical");
    }
    else{
    int i = 0;
    int flag = 0;
    while(str[i]!='\0'){
        if(str[i] != str2[i]){
            flag = -1;
            break;
        }
        i++;
    }
        if(flag==0){
            printf("Identical");
        }
        else{
            printf("Not Identical");
    }
    }
        return 0;
}