#include<stdio.h>
int main()
{
int n;
printf("Enter the number here: ");
scanf("%i",&n);
int sum = 0;
int copy = n;
while(n>0){
    int rem = n%10;
    int b = 3;
    int rev = 1;
    for(int i =1;i<=b;i++){
        rev = rev*rem;
    }
    sum = sum+rev;
    n = n/10;
}
if (copy == sum)
{
    printf("Yes it is a Armstrong Number");
}
else{
    printf("No it is not Armstrong Number");
}
return 0;
}