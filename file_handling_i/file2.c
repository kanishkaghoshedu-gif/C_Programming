#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch[20];
   FILE *fptr;

   if ((fptr = fopen("program.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   printf("Reading lines from file:\n");
    
    // fscanf returns EOF when the end of the file is reached
    // read line by line
    while (fgets(ch, sizeof(ch), fptr) != NULL) {
        printf("%s", ch);
    }

    fclose(fptr);
  
   return 0;
}