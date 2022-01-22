#include <stdio.h>
int main(){

FILE * file;

file = fopen("C:\\Users\\user\\Desktop\\sahilNew1.txt" , "w");

fprintf(file , "Hello everyone , I am undergrad student at MAIT Delhi. \n");
fprintf(file , "I am doing B.tech in information technology \n");
fprintf(file , "I am in M2 group\n");


printf("successfully wrote");

fclose(file);

return 0;
}
