#include <stdio.h>

int palindrome(int n){
    int r, d = 0, original = n;

    while(n != 0){
        r = n % 10;
        d = d * 10 + r;
        n /= 10;
    }

    return (original == d);
}

int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(palindrome(num)){
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}