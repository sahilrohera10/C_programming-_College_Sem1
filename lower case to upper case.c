#include <stdio.h>
#include <string.h>

int main() {


char str[100];
scanf("%s" ,str);

int n=strlen(str);


for(int i=0;i<n;i++){
    printf("%c" , str[i]-32);
}

    return 0;
}
