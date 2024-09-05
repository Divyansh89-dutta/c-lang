// DMA - calloc malloc realloc free
//calloc - ye ek array banaata hai aapke bataye gaya size ka par ek extra feature hai ki aap baad mein uska size 
//ghata ya badha sakte ho

int arr[100];
int *arr = calloc(100, sizeof(int));
calloc(100, sizeof(int));
malloc(100,sizeof(int));
//memory leak,dangling pointer
int arr[100];
int *ptr = calloc(100,sizeof(int));
//memory leak-aapne dynamic memory banayi but use free nahi kiya, aisi situation mein ye bani memory use nahi 
//ho paati, aur ye memory kehlaati hai memory leakage
//dangling pointer - ab kyuki aapne dynamic memory banaayi haogi to uske liye ek pointer bhi banyan hoga
