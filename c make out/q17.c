#include<stdio.h>
int main()
{
int cp,sp;
printf("Enter the Amount here: ");
scanf("%i%i",&cp,&sp);
int amo = sp-cp;
if (sp>cp)
{
    /* code */printf("Profit of %i",amo);
}
else{
    printf("Loss of %i",-amo);
}
return 0;
}