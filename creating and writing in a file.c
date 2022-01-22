#include <stdio.h>
#include <stdlib.h>

int main(){

  char str[1000] ;
  char ch;
  FILE * file;
  int words = 0;

  file = fopen("C:\\Users\\user\\Desktop\\sahilnew.txt" ,"w");

  //printf("file created successfully");
  printf("file opened successfully \n");

  fclose(file);


return 0;
}
