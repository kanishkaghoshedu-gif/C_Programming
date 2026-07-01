#include <stdio.h>

int main(){
    int num, r, d = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0){
        r = num % 10;
        d = d * 10 + r;
        num /= 10;
    }

    printf("Reversed number: %d\n", d);
    return 0;
}