#include<stdio.h>
int main(){
    char str[]="1,2 ka 4,4 2 ka 1, my name is sheryians";
    int i = 0;
    int characters =0;
    int numbers = 0;
    int special = 0;
    while(str[i]!='\0'){
        if(str[i]>=65 && str[i]<=90){
            characters++;
        }
        else if(str[i]>=97 && str[i]<=122){
           characters++;
        }
        else if(str[i]>=48 && str[i]<=57){
           numbers++;
        }
        else{
            special++;
        }
        i++;
    }
    printf("Characters: %i \nNumbers:%i \nSpecial Characters:%i",characters,numbers,special);
return 0;
}