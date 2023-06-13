#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>



int main(){

FILE* file = fopen("sample.txt","w");

 if(file == NULL)
   printf("Unable to open file\n");

 fprintf(file, "hello file bro\n");
 fputs("here goes another line\n",file);
 fputc('J', file);


 fclose(file);

 return 0;
 
}
