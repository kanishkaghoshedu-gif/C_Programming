#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int freq[100] = {0};  
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        freq[arr[i]]++; 
    }
    printf("Missing numbers are:\n");
    for(int i = 0; i < n; i++){
        if(freq[i] == 0){
            printf("%d ", i);
        }
    }

    return 0;
}