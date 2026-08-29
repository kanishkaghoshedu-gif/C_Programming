#include <stdio.h>

int main() {
    int a[10] = {12, 90, 12, 90, 78};
    int arr[10];
    int i, j, k;
    int n = 5;   // actual number of elements
    int size = 0;

    for (i = 0; i < n; i++) {
        int isDuplicate = 0;

        // check if already present in arr
        for (j = 0; j < size; j++) {
            if (a[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // if not duplicate, store it
        if (!isDuplicate) {
            arr[size++] = a[i];
        }
    }

    // print result
    for (k = 0; k < size; k++) {
        printf("%d ", arr[k]);
    }

    
}
