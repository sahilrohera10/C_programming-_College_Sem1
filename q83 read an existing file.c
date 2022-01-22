#include <stdio.h>
int main (){

 FILE * file;

 char data[500];

 file = fopen("C:\\Users\\user\\Desktop\\sahilnew.txt" , "r");


 while(fscanf(file, "%s", data)!=EOF){
   printf("%s ", data );
   }

fclose(file);

return 0;
}
