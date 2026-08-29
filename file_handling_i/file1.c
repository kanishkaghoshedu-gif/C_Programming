#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, price, total=0;
   char product[20];
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

    printf("How many product records do you want to enter? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter product %d: ", i + 1);
        scanf("%s", &product);
        printf("Enter price: ");
        scanf("%d", &price);

        total += price;
        
        // Write the product details followed by a newline or space
        fprintf(fptr, "%s : Rs. %d\n", product, price);
    }
        fprintf(fptr, "Total Price: Rs. %d\n", total);

   return 0;
}