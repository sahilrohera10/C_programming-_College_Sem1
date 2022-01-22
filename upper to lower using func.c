#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {


char str[100];
scanf("%s" , str);



int n = strlen(str);

int i=0;
while(i<n){
    str[i] = tolower(str[i]);

    i++;
}

printf("so the string entered is changed to %s", str);

    return 0;
}
