#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value here: ");
scanf("%i%i%i",&a,&b,&c);
if (a>b && a>c)
{
    /* code */printf("A is the largest");
}
else if (b>a && b>c)
{
    /* code */printf("B is the largest");
}
else
{
    /* code */printf("C is the largest");
}

return 0;
}