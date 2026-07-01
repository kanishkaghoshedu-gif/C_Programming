// frequencies of each digit must be same . here 4 and 7 are lucky numbers. so if a number contains only 4 and 7 and their frequencies are same then it is a lucky number. 

#include <stdio.h>

int main(){
    int num;
    int freq[10] = {0};
    printf("Enter a number: ");
    scanf("%d", &num);
    //with frequency
    /*while(num!=0){
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    // find first non-zero frequency
int first_freq = 0;
for (int i = 0; i < 10; i++) {
    if (freq[i] != 0) {
        first_freq = freq[i];
        break;
    }
}

// compare only non-zero frequencies 
for (int i = 0; i < 10; i++) {
    if (freq[i] != 0 && freq[i] != first_freq) {
        printf("Not a lucky number\n");
        return 0;
    }
}

printf("Lucky number\n");*/

//without frequency
int count_4 = 0; int count_7 = 0;
while(num!=0){
        int digit = num % 10;
        if (digit == 4){
            
            count_4++;
        }
        if (digit == 7){
           
            count_7++;
        }
        num /= 10;
    }
    if (count_4 == count_7){
        printf("Lucky number\n");
    }
    else{
        printf("Not a lucky number\n");
    }

return 0;
}