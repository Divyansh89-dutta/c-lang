int n = sizeof(str)/sizeof(char);
int end  = n-2;
int flag = 0;
for(int i =0;i<(n-1)/2;i++){
     if(str[i] != str[end]){
        flag = -1;
        break;
     }
     end--;
}
if(flag==0){
    printf("Palindromic String");
}
else{
    printf("Not a Palindromic String");
}