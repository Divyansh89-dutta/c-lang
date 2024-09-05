#include<stdio.h>
int main()
{
int m;
printf("Enter the Month here: ");
scanf("%i",&m);
if (m==1)
{
    /* code */printf("Jan");
}
else if (m==2)
{
    /* code */printf("Feb");
}
else if (m==3)
{
    /* code */printf("Mar");
}
else if (m==4)
{
    /* code */printf("Apr");
}
else if (m==5)
{
    /* code */printf("May");
}
else if (m==6)
{
    /* code */printf("Jun");
}
else if (m==7)
{
    /* code */printf("Jul");
}
else if (m==8)
{
    /* code */printf("Aug");
}
else if (m==9)
{
    /* code */printf("Stp");
}
else if (m==10)
{
    /* code */printf("Oct");
}
else if (m==11)
{
    /* code */printf("Nev");
}
else if(m==12)
{
    /* code */printf("Dec");
}
else{
    printf("Invalid month");
}
return 0;
}