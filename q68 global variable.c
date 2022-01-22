#include <stdio.h>

int g=10;   //global variable (can accessable everywhere )


void printOne(int n){
   int x = n+1;           //local variables
    printf("%d \n" , x);

}



int main() {
int n =0;
printOne(n);

printf("%d" , g);

    return 0;
}
