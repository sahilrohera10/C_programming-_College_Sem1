#include <stdio.h>

int main(){


int count = 0;
char ch ;
 FILE * file;

 file = fopen("C:\\Users\\user\\Desktop\\sahilnew.txt" , "r");

 while(1){
    ch = fgetc(file);
    if(ch == ' ' || ch == '\n' || ch == '\0')
      {
           count++;
      }

    if(ch == EOF){
        break;
    }

 }


printf("the number of words present in this file are %d" , count);



return 0;
}
