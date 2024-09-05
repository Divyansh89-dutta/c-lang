#include <stdio.h>

int main() {
    int a[] = {2, 4, 6, 5, 7, 8, 9, 10, 99, 98};
    int len = sizeof(a) / sizeof(int);
    int find = 10;
    
    int start = 0, end = len - 1, mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (a[mid] == find) {
            printf("%d found at index %d\n", find, mid);
            return 0;
        } else if (find < a[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    printf("Element not present\n");

    return 0;
}
