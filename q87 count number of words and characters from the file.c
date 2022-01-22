#include <stdio.h>

int main(){


int words = 0;
int character = 0;

char ch ;
//char chr ;
 FILE * file;

 file = fopen("C:\\Users\\user\\Desktop\\sahilNew1.txt" , "r");

 while(1){
    ch = fgetc(file);
    character++;
    if(ch == ' ' || ch == '\n' || ch == '\0')
      {
           words++;
      }

    if(ch == EOF){
        break;
    }

 }


printf("the number of words present in this file are %d\n" , words);
printf("the number of characters present in this file are %d" , character);

fclose(file);


return 0;
}
