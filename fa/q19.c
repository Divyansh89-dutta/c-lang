//user se size of array maango and utne number maanglo and iske 
//baad puchho ke aur number chachiye agar'y' bolo to
//ek aur number maango and iske baad fir puchho jab tak 'n' na bole.
//aur fir 'n' bolne par saare number print kro.
#include<stdio.h>
int main()
{
int size;
char choice;
scanf("%i",&size);
int *PTR = calloc(5,sizeof(int));
if(PTR==NULL){
    printf("can not allocate memory");
    return 1;
}
for(int i =0;i<size;i++){
    scanf("%i", &PTR[i]);
}
do{
    printf("aur number chahiye: ");
    scanf(" %c",&choice);
    if(choice=='y'||choice=='Y'){
        size++;
        PTR=realloc(PTR,size*sizeof(int));
        printf("Value bako: ");
        scanf("%i",&PTR[size-1]);
    }
    else if(choice=='n'||choice=='N'){
        break;
    }
    else{
        continue;
    }
}
while(choice!='y'&&choice!='Y');
for(int i =0;i<size;i++){
    printf("%i ",PTR[i]);
}
return 0;
}