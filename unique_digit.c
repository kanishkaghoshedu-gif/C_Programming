#include <stdio.h>
#include <stdbool.h>
bool isunique(int arr[], int size){

    //printf("%d",size);
    int i,j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j])
            return false;       
        }
    }
    return true;
}


int main(){
    int n1, n2,n,j=0;
    int i;
    printf("Enter tthe number range: ");
    scanf("%d %d", &n1, &n2);
    for(i=n1;i<=n2;i++){
        n=i;
        j=0;
        int arr[10]={0};
        while(n!=0){
          int  d = n%10;
          arr[j++]=d;
          n=n/10;
        }
        // int size = sizeof(arr)/sizeof(arr[0]);
        if(isunique(arr,j))
            printf("%d ", i);

    }
}