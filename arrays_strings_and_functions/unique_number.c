#include <stdio.h>
#include <stdbool.h>

bool isunique(int arr[], int size)
{
   int i, j;
   for(i=0; i<size; i++){
    for(j=i+1; j<size; j++){
        if(arr[i] == arr[j]){
            return false;
        }
    }
   }
   return true;
}

int main(){
    int num;
    int arr[100];
    int i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0){
        int digit = num % 10;
        arr[i++] = digit;
        num /= 10;
    }
   bool a=isunique(arr,i);
   if (a){
    
    printf("The number has all unique digits.\n");
   }
   else{
    printf("The number does not have all unique digits.\n");
   }




    return 0;
}