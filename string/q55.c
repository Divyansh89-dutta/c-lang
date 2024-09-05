
#include<stdio.h>
int main()
{
char str[]="ma mh me";
int a[200];
for(int i =0;i<200;i++){
    a[i]=0;
}
int i = 0;
while(str[i]!='\0'){
    a[str[i]]++;
    i++;
}
int max =0;
for(int i = 0;i<200;i++){
    if(a[i]>a[max]&&i!=32){
        max=i;
    }
}
printf("%c is the maximun occuring charecter which comes times %i",max,a[max]);
return 0;
}