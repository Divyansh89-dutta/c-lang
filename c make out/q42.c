#include<stdio.h>
int main()
{
int n;
printf("n: ");
scanf("%i",&n);
int a[n];
printf("Element of array: ");
for(int i =0;i<n;i++){
scanf("%i",&a[i]);
}
int f = -1;
int k;
printf("K: ");
scanf("%i",&k);
for(int i =0;i<n;i++){
    if (a[i]==k)
    {
        f=i;
        break;
    }
}
if(f!=-1){
    printf("%i found at %i",k,f);
}
else{
    printf("%i",k);
}
return 0;
}