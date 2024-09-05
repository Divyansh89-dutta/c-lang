#include<stdio.h>
int main(){
char str[]="abcde";
char str2[]="pqrst";
int len1 = 0;
while(str[len1]!='\0'){
    len1++;
}
int len2 = 0;
while(str2[len2]!='\0'){
    len2++;
}
int copy[len1+len2+1];
int prog = 0;
for(int i=0;i<(len1+len2+1);i+=2){
    copy[i]=str[prog];
    prog++;
}
prog = 0;
for(int i=1;i<(len1+len2+1);i+=2){
    copy[i]=str2[prog];
    prog++;
}
copy[len1+len2]='\0';
for(int i =0;i<(len1+len2+1);i++){
    printf("%c ",copy[i]);
}
return 0;
}