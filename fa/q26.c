#include<stdio.h>
int main()
{
FILE*fptr;
fptr = fopen("chitti_the_file.txt","r");
//fputs("harsh hello hi lemdo kemcho!",fptr)
for(int i = 0;i<15;i++){
    printf("%c",fgetc(fptr));
}
return 0;
}