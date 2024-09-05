#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5};
int *b = &a;
for(int i = 0;i<5;i++){
    printf("%i ",*(b+i));
}
return 0;
}