#include <stdio.h>

int factorial( int n){
    int i , fact = 1;
    if (n == 0)
    return 1;
    else
    return n*factorial(n-1);
    }
int main(){
    int num,d, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;
    while(temp!=0){
        d = temp % 10;
        sum += factorial(d);
       temp /= 10;      
    }

      if (sum == num){
        printf("The number is a strong number.\n");
    } else {
        printf("The number is not a strong number.\n");
    }
}