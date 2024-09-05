#include<stdio.h>
int main()
{
int *PTR = calloc(5,sizeof(int));
for(int i = 0 ;i<5;i++){
    scanf("%i",&PTR[i]);
}
for(int i = 0;i<5;i++){
    printf("%i",PTR[i]);
}
return 0;
}