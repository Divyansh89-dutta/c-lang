#include<stdio.h>
int secondmaxIndex(int *a,int l){
for(int j = 0;j<l;j++){
for(int i = 0;i<l-1;i++){
    if(a[i+1]<a[i]){
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
}
}
return a[l-2];
}
int main()
{
int a[]={12,22,34,4,55,6,75,8};
int l = sizeof(a)/sizeof(int);
int ans = secondmaxIndex(a,l);
printf("%i",ans);
return 0;
}