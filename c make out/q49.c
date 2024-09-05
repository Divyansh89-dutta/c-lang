#include<stdio.h>
int main()
{
int n;
printf("n: ");
scanf("%i",&n);
int a[n];
printf("Enter the value here: ");
for(int i=0;i<n;i++){
    scanf("%i",&a[i]);
}
int s =0;
int e = n-1;
int f =0;
for(int i =0;i<n/2;i++){
    if (a[s]!=a[e])
    {
        f = -1;
        break;
    }
    s++;
    e--;
}
if (f==-1)
{
    printf("No it is not Palindromic Number");
}
else{
    printf("Yes it is a Palindromic Number");
}
return 0;
}