// A number that contains all the digits from 0 to 9 at least once is called a pandigital number. Write a C program to check whether a given number is a pandigital number or not.
#include <stdio.h>
#include <stdbool.h>

int main(){
    int num, i, digit, freq[10] = {0};
    printf("Enter a number: ");
    scanf("%d", &num);
    //create a frequency array to count the occurrence of each digit
    while(num != 0){
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    } 
    //check if all digits from 0 to 9 are present at least once
        for( int j = 0; j <10;j++){
            
      // printf("%d ", freq[j]);}
            int flag = 0;
        if(freq[j] == 0 || freq[j] > 1){
            printf("The number is not a pandigital number.\n");
            flag = 1; // for breaking the loop if the number is not pandigital
            break;
        }
        if(freq[j] == 1){
            printf("The number is a pandigital number.\n");
            flag = 1; // for breaking the loop if the number is pandigital
            break;
        }
    } 
    
    
    
return 0;
}