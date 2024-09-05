#include<stdio.h>
int maxNikaalo(int *a,int l){
    int maxNikaalo =0;
    for(int i = 1;i<l;i++){
        if(a[maxNikaalo]<a[i]){
            maxNikaalo=i;
        }
    }
}
int main()
{
int a[]={1,2,3,4,5,6,7,8};
int l = sizeof(a)/sizeof(int);
maxNikaalo(a,l);
return 0;
}