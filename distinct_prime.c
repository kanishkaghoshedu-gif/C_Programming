#include <stdio.h>
#include <stdbool.h>
 bool prime(int num){
    int i,c=0;
    for(i=1; i<=num; i++){
      
           if(num%i==0){
            c++;
               
            }
        }
        
        if(c==2) return true;
        else return false;
    }

int main(){
    int n1, n2, d, n;
    printf("Enter the number range: ");
    scanf("%d %d",&n1,&n2);
    int i;
    for(i=n1 ; i<=n2; i++){
        n=i;
        int flag=0;
        while (n!=0){
            d = n%10;
         if(prime(d)==false)
         {flag=1;
        }
        
            n/=10;
        }
        if(flag==0)
        printf("%d ",i);
    }
   
    return 0;
}