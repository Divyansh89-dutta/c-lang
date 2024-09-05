#include<stdio.h>
int main()
{
int a[]={2,4,6,5,7,8,9,10,99,98};
int len = sizeof(a)/sizeof(int);
int start = 0;
int end = len-1;
int mid = (start+end)/2;
int find = 10;
while (start<=len)
{
    if(a[mid]==find){
        printf("%i found at index %i",find,mid);
        break;
    }
        else if (find<a[mid])
        {
            end= mid -1;
        }
        else {
            start = mid +1;
        }
        mid = (start+end)/2;
    }
if(start>end){
    printf("Element not present");
    }

return 0;
}