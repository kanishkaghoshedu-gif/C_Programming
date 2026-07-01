#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 1, c;
    for(int i=1; i<=n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("Fibonacci series up to %d terms is: ", n);
    return 0;

}