#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int c){
    return c-10;
}
int main()
{
int c = add(10,12);
int d = sub(c);
printf("%i",d);

return 0;
}