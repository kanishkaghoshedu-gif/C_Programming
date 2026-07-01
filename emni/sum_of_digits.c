#include <stdio.h>

int main(){
    int num, sum = 0, d;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while(num != 0){
        d = num % 10;
        sum += d;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}