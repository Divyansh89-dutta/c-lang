#include<stdio.h>
int main()
{
FILE*fptr;
fptr = fopen("chitti_the_file.txt","r+");
fputs("harsh",fptr);
return 0;
}