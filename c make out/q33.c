#include<stdio.h>
int main()
{
int n1;
printf("Enter the value here: ");
scanf("%i",&n1);
int  copy1 = n1;
int n2;
printf("Enter the value here: ");
scanf("%i",&n2);
int copy2 = n2;
while (n1!=n2)
{
    if(n1>n2){n1 = n1-n2;
}
else{
    n2 = n2-n1;
}
}
printf("Lcm is %i",(copy1*copy2)/n2);
return 0;
}