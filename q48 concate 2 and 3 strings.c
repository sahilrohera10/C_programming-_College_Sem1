#include <stdio.h>
#include <string.h>


void concateString(char str1 [] , char str2 [] , char str3 []){
    strcat(str1 , str2);
    strcat(str1 , str3);
    printf("%s", str1);
}

int main() {

char str1[100],str2[100] , str3[100];
scanf("%s",str1);
scanf("%s",str2);
scanf("%s",str3);

concateString(str1, str2 , str3);


    return 0;
}
