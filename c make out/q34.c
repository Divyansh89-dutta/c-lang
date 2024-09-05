#include<stdio.h>
int main()
{
int n;
printf("Enter the value here: ");
scanf("%i",&n);
int per = 1;
int sum = 0;
for(int i =1;i<=n;i++){
    per = per*10+1;
    sum = sum+per;

if(i==n){
    printf("%i =",per);
}
else{
    printf("%i +",per);
}
}
printf("%i ",sum);
return 0;
}