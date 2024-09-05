#include<stdio.h>
int main()
{
FILE*fptr;
fptr = fopen("chitti_the_file.txt","r");
char str[100];
fgets(str,100,fptr);
printf("%s",str);
return 0;
}