#include<stdio.h>
int main()
{
char str1[]="labrador lag gaya";
char str2[]="labrador leg gaya";
int n1 = sizeof(str1)/sizeof(char);
int n2 = sizeof(str2)/sizeof(char);
if (n1!=n2)
{
    printf("Not identical");
}
else{
    int i = 0;
    int f = 0;
    while (str1[i]!='\0')
    {
        if (str1[i]!=str2[i])
        {
            f =1;
            break;
        }
        i++;
    }
    if (f==0)
    {
        printf("Identical");
    }
    else{
        printf("Not Identical");
    }
}
return 0;
}