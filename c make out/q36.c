#include<stdio.h>
int main()
{
int n;
printf("Enter the number here: ");
scanf("%i",&n);
int sum = 0;
for(int i =1;i<=n/2;i++){
    if (n%i==0)
    {
        sum = sum+i;
    }
}
if (sum==n)
{
    printf("Yes it is a Perfect Number");
}
else{
    printf("No it is not a Perfact Number");
}
return 0;
}