#include<stdio.h>

int main (){

FILE * file;
char ch ;
int count = 0;

file = fopen("C:\\Users\\user\\Desktop\\sahilNew1.txt" , "r");

while(1){
    ch = fgetc(file);
    if(ch == '\n'){
        count++;
    }
    if(ch == EOF){
        count++;
        break;
    }
}

printf("the number of lines present in this file are %d" , count);



return 0;
}
