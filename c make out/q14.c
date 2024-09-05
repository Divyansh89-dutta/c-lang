#include<stdio.h>
int main()
{
int a;
printf("Enter the value here: ");
scanf("%i",&a);
if (a<0 && a%2==0)
{
    /* code */printf("-ve or even");
}
else if (a>0 && a%2==0)
{
    /* code */printf("+ve or even");
}
else if (a<0 && a%2!=0)
{
    /* code */printf("-ve or odd");
}
else{
    printf("+ve or odd");
}
return 0;
}