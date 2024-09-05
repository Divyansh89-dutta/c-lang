#include<stdio.h>
int nums(int *a,int len){
    int sum =0;
    for(int i = 0;i<len;i++){
        sum  = sum+a[i];
    }
    return sum;
}
int main()
{
int a[]={1,2,3,4,5,6,7,8};
int len = sizeof(a)/sizeof(int);
int result = nums(a,len);
printf("sum: %i",result);
return 0;
}