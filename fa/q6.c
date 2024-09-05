#include <stdio.h>

int maxNikaalo(int *a, int l) {
    int maxIndex = 0; 
    for (int i = 1; i < l; i++) {
        if (a[maxIndex] < a[i]) {
            maxIndex = i; 
        }
    }
    return maxIndex; 
}
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int l = sizeof(a) / sizeof(int);
    int maxIndex = maxNikaalo(a, l);
    printf("Index of the maximum element: %d", maxIndex);
    return 0;
}
