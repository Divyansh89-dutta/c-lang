#include<stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);
    int k = 3;
    for (int i = 0; i < k; i++) {
        int temp = a[n - 1];  
        for (int j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];  
        }
        a[0] = temp; 
    }
    for (int i = 0; i < n; i++) {
        printf("%i ", a[i]);
    }
    
    return 0;
}
