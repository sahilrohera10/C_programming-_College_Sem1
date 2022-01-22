#include <stdio.h>
#include <string.h>
int main(){

char line[10][200];
int k = 0;

FILE * file ;
file = fopen ("C:\\Users\\user\\Desktop\\sahilNew1.txt" , "r");


while(fgets(line[k],200, file))
{
    line[k][strlen(line[k])-1] = '\0';
    k++;

}

printf("the content of file sahilNew1 is :  \n");

for(int i=0;i<k;i++){
    printf("%s\n", line[i]);
}
printf("\n");

fclose(file);

return 0;
}
