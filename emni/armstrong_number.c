#include <stdio.h>

int isArmstrong(int n){
    int r, d = 0, original = n;

    while(n != 0){
        r = n % 10;
        d += r * r * r;
        n /= 10;
    }

    return (original == d);
}

int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(isArmstrong(num)){
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}