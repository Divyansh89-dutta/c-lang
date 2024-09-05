#include<stdio.h>
int main()
{
char str[]="SHERYIANS";
int len = sizeof(str)/sizeof(char);
for(int i=0;i<len;i++){
    printf("%c ",str[i]);
}
return 0;
}