#include<stdio.h>
int main()
{
float m,s,e,h;
printf("Enter the Marks here: ");
scanf("%f%f%f%f",&m,&s,&e,&h);
float total = (m+s+e+h)/4;
if (total>=85)
{
    /* code */printf("A");
}
else if(total>=75)
{
    /* code */printf("B");
}
else if(total>=65){
    printf("C");
}
else if(total>=55){
    printf("D");
}
else if(total>=45){
    printf("E");
}
else{
    printf("F");
}
return 0;
}