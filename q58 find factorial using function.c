#include <stdio.h>

int findFactorial(int n){
    int p = 1;
    for(int i=1 ; i<=n;i++){
        p = p * i;
    }
    return p;
}



int main() {

int n;
scanf("%d" , &n);

printf("the factorial of %d is %d" , n , findFactorial(n) );


    return 0;
}
