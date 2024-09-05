#include<stdio.h>
int main()
{
int a[]={1,2,2,1};
int n=sizeof(a)/sizeof(a[0]);
int s = 0;
int e= n-1;
int f =0;
for(int i=0;i<n/2;i++){
    if(a[s]!=a[e]){
    f= -1;
    break;
    }
    s++;
    e--;
}
if(f==-1){
    printf("No it is not Palindrome Array");
}
else{
    printf("Yes it is Palindrome Array");
}
return 0;
}