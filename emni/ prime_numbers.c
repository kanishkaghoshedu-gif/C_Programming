#include <stab.h>

int main(){
    int i, n, isPrime;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=2; i<=n; i++){
        isPrime = 1;
        for(int j=2; j<i; j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d ", i);
        }
    }
    return 0;
}