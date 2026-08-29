#include <stdio.h>

int main(){
    int i,j, n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    //pattern type 1: right pyramid
   /*for(i = 1; i <= n; i++){
    for(j = n-1; j >= 0; j--){      // spaces loop
        printf(" ");
    }
    for(j = 1; j <= i; j++){      // stars loop
        printf("*");
    }
    printf("\n");
}*/
//left pyramid
for(i = 1; i <= n; i++){
    for(j = 1; j <= n-i; j++){      // spaces loop
        printf(" ");
    }
    for(j = 1; j <= i; j++){      // stars loop
        printf("*");
    }
    printf("\n");
}
/*for(i = 1; i <= n; i++){
    for(j = 1; j <= n-i; j++){
        printf(" ");
    }
    for(j = 1; j <= i; j++){
        printf("* ");        // note the space after *
    }
    printf("\n");
}*/
    return 0;
}