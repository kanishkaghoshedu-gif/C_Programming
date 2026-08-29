#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num < 10){
        printf("%d", num);  // single digit
        return 0;
    }

    int last = num % 10;
    int second_last = (num / 10) % 10;
    int remaining = num / 100;

    int result = remaining * 100 + last * 10 + second_last;

    printf("%d", result);

    return 0;
}