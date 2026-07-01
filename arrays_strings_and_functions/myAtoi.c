#include <stdio.h>

int myAtoi(const char *str) {
    int i = 0;
    int sign = 1;
    int result = 0;

    // 1. Skip leading spaces
    while (str[i] == ' ') {
        i++;
    }

    // 2. Check sign
    if (str[i] == '-') {
        sign = -1;
        i++;
    } 
    else if (str[i] == '+') {
        i++;
    }

    // 3. Convert digits
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // 4. Apply sign
    return result * sign;
}

int main() {
    char s[] = "   -12345abc";

    int val = myAtoi(s);

    printf("%d\n", val);  // Output: -12345

    return 0;
}