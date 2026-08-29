#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, n;
   char ch[20];
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

    printf("How many lines do you want to enter? ");
    scanf("%d", &n);
    getchar(); // clear newline from buffer
    for (int i = 0; i < n; i++) {
        printf("Enter sentence %d: ", i+1);
        fgets(ch, sizeof(ch), stdin);
        
        // Write the number followed by a newline or space
        fprintf(fptr, "%s", ch);
    }

   return 0;
}