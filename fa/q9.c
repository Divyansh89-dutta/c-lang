#include<stdio.h>
void findsqurence(int *arr, int find,int len){
int flag = -1;
for (int i = 0; i <len ; i++) {
    for(int j = 1+i;j<len;j++){
        if(arr[i]+arr[j]==find){
            printf("found sequence %i %i",arr[i],arr[j]);
            flag = -2;
            break;
        }
    }
    if(flag == -2) break;
}
if(flag == -1) {
    printf("No such sequence found");
}
}
int main(){
    int arr[]={1,3,5,23,45,6,3,25,6,23,6};
    int len = sizeof(arr)/sizeof(0);
    int find = 129;
    findsqurence(arr,find,len);
return 0;
}