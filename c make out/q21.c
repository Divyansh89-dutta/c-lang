#include<stdio.h>
int main()
{
int h;
printf("Enter the Height here: ");
scanf("%i",&h);
if (h>200)
{
    printf("Tall guy");
}
else if(h>150 && h<200)
{
    printf("Average");
}
else{
    printf("Chotu 2 chai lana");
}
return 0;
}