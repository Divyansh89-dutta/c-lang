#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5};
int l = sizeof(a)/sizeof(a[0]);
int *b = &a;
for(int i = 0;i<l;i++){
    if(*(b+i)==3){
        for(int j= i;j<l-1;j++){
            a[j]=a[j+1];
        }
    }
}
for(int i = 0;i<l-1;i++){
    printf("%i ",*(b+i));
}
return 0;
}