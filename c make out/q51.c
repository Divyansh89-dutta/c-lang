#include<stdio.h>
int main()
{
char str[]="Divyansh";
int i = 0;
while (str[i]!='\0')
{
    i++;
}
printf("String is %s and its length is %i",str,i);
return 0;
}