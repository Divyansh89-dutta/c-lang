#include<stdio.h>
int main(){
char str[]="Di v  ya n s h";
int i = 0;
int count = 0;
while(str[i]!='\0'){
    if(str[i]== ' '){
        count++;
    }
    i++;
}
for(int l=1;l<count;l++){
    for(int j=0;j<i;j++){
        if(str[j]==' '){
            for(int k = j;k<i-1; k++){
            str[k]=str[k+1];
        }
    }
}
}
for(int l = 0;l<i-count;l++){
    printf("%c",str[l]);
}
return 0;
}