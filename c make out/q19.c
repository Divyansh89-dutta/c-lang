#include<stdio.h>
int main()
{
int day;
printf("Enter the Day Number: ");
scanf("%i",&day);
if (day==1)
{
    ("Monday");
}
else if (day==2)
{
    /* code */printf("Tuesday");
}
else if(day==3)
{
    /* code */printf("Wednesday");
}
else if(day==4){
    printf("Thursday");
}
else if(day==5){
    printf("Friday");
}
else if(day==6){
    printf("Saturday");
}
else{
    printf("Sunday");
}
return 0;
}